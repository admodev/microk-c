// System libs
#include <string.h>

// Project libs
#include "../include/string_helpers.h"

int string_in(char *needle, char **haystack, size_t haystack_size)
{
    for (size_t x = 0; x < haystack_size; x++)
    {
        if (strcmp(needle, haystack[x]) == 0)
        {
            return 1;
        }
    }
    return 0;
}
