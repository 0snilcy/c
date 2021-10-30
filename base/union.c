#include "stdio.h"

void unionFn()
{
    union split_int {
        int integer;
        unsigned char bytes[sizeof(int)];
    };

    int i;
    union split_int si;
    printf("Please enter an integer number:\n");
    scanf("%d", &si.integer);

    for (int i = 0; i < sizeof(int); ++i) {
        printf("byte #%d is %i\n", i, si.bytes[i]);
    }
}