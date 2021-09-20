#include <stdio.h>

void args(int argc, char **argv)
{
    printf("argc: %i\n", argc);
    while (*argv)
    {
        printf("argv: \"%s\"\n", *argv);
        argv++;
    }
}
