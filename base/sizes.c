#include <stdio.h>

void sizes()
{
    printf("short:          %lu \n", sizeof(short));
    printf("int:            %lu \n", sizeof(int));
    printf("long:           %lu \n", sizeof(long));
    printf("long long:      %lu \n\n", sizeof(long long));

    printf("float:          %lu \n", sizeof(float));
    printf("double:         %lu \n", sizeof(double));
    printf("long double:    %lu \n", sizeof(long double));
}
