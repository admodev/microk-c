// System libs
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Project libs
#include "../include/shared.h"

int main()
{
    bool is_executing = true;
    char *command[500];
    char *available_commands[] = {"procs", "procscpu", "clearsc", "microhelp", "exit"};

    printf("Welcome to Microk-C!\n");

    while (is_executing)
    {
        printf("> ");
        scanf("%s", command);

        if (strcmp("procs", command) == 0)
        {
            printf("procs func\n");
        }
        else if (strcmp("microhelp", command) == 0)
        {
            helper();
        }
        else if (strcmp("exit", command) == 0)
        {
            printf("Press CTRL+C to abort...\n");
            is_executing = false;
        }

        if (string_in(command, available_commands, 4) != 1)
        {
            print_help_message();
        }
    }

    return 0;
}
