// System libs
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Project libs
#include "../include/shared.h"

int main()
{
    bool is_executing = true;
    char command[100];

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
            print_help_message();
        }
        else if (strcmp("exit", command) == 0)
        {
            printf("exiting...\n");
            is_executing = false;
        }
    }

    return 0;
}
