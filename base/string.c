#include <stdio.h>

int string_length(const char *str)
{
    int length = 0;
    while (str[length])
    {
        length++;
        printf("char: %c, %i, %p\n", str[length], str[length], str[length]);
    };
    return length;
}

void string_copy(const char *src, char *dest)
{
    for (; *src; src++, dest++) *dest = *src;
    *dest = 0;
}

void strings()
{
    char sym = 'H';
    char intSym = 73;
    char text[] = "Hello!";
    printf("string %s\n", text);
    printf("string length %i\n", string_length(text));
    printf("symbol %c, %i\n", sym, sym);
    printf("symbol %c, %i\n", intSym, intSym);

    printf("%c, %i, %c, %i\n", '\0', '\0', 48, 0);
    printf("%i\n", NULL == 0);

    char copied[6];
    string_copy(text, copied);
    printf("copied: [%s]", copied);
}
