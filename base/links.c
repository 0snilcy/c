#include <stdio.h>

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void logxy(int x, int y)
{
    printf("x: %i, y: %i\n", x, y);
}

void links()
{
    // &var - операция взятия адреса
    // *link - операция разыменования

    int x, y = 0;
    int *p;

    p = &x;
    // *p = x
    *p = 27;
    logxy(x, y);

    int *q, *r;

    x = 25;
    y = 36;
    p = &x;
    q = &y;

    // *p = x
    // *q = y

    r = p;
    *r = *q;
    // x = y = 36
    logxy(x, y);
    x = 25;
    swap(p, q);
    logxy(x, y);
    swap(&x, &y);
    logxy(x, y);
}