exec: clean compile bin/microk src/main.o src/shared.o run

compile:
	echo "Starting compilation..."

bin/microk: src/main.o src/shared.o
	echo "Linking"
	gcc -o bin/microk $^

src/main.o: src/main.c include/shared.h
	echo "Compiling main.c"
	gcc -c src/main.c -o src/main.o -I./include -I./src

src/shared.o: src/shared.c include/shared.h
	echo "Compiling shared.c"
	gcc -c src/shared.c -o src/shared.o -I./include -I./src

clean:
	test -e "bin/microk" && rm bin/microk || echo "The main file does not exist. Skipping clean..."

run:
	bin/microk

all: compile run
