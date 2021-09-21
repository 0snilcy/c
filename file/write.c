#include <stdio.h>
#include <math.h>

void exit(int);

void writefile()
{
    FILE *f;
    f = fopen("text.txt", "w");
    if (!f) {
        perror("write text.txt");
        exit(1);
    }

    int grad;
    for (grad = 0; grad < 360; grad++) {
        double rads, s, c;
        rads = (double)grad * M_PI / 180.0;
        s = sin(rads);
        c = cos(rads);
        fprintf(f, "%03d % 7.5f % 7.5f\n", grad, s ,c);
    }

    fclose(f);
}