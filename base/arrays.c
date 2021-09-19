#include <stdio.h>

void arrays()
{
    int m[20];

    for (int i = 0; i < 20; i++)
    {
        m[i] = i;
    }

    printf("%i\n", *m);
    printf("%i\n", m[0]);
    printf("%i\n", m[0] == *m);
}
