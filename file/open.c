#include <stdio.h>

void exit(int);

void openfile()
{
    FILE *f;
    f = fopen("file.txt", "r");
    if (!f) {
        perror("open file.txt");
        fprintf(stderr, "I think there's an error\n");
        exit(1);
    }
}