#include <stdio.h>

void enumFn()
{
    enum colors { red = 300, green, blue };
    enum colors redColor = red;

    printf("red: %i, green: %i, blue: %i, redColor: %i\n", red, green, blue, redColor);

    enum {MAX_BUFFER_SIZE = 1024};
}
