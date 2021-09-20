#include <stdio.h>

void consts()
{
    const int count = 137;
    // count = 12; error: assignment of read-only variable 'count'

    int *countRef = &count;
    // *countRef = 17; warning: initialization discards 'const' qualifier from pointer target type [-Wdiscarded-qualifiers]

    const int *p;
    p = &count;
    // *p = 32; error: assignment of read-only location '*p'

    printf("consts %i, %i, %i\n", count, *countRef, *p);
}
