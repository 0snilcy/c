#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void structFn()
{
    enum {max_name_length = 50, max_group_length = 10};
    enum sex {m = 'm', f = 'f'};

    struct Person {
        char name[max_name_length];
        enum sex sex;
        int group;
        int year;
    };

    struct Person p1;
    strcpy(p1.name, "Johnny Rocket");
    p1.sex = 'm';
    p1.group = 137;
    p1.year = 1992;

    struct Person p2 = {
        "Albert Zubov",
        m,
        137,
        1992
    };

    struct Person *p3;
    p3 = malloc(sizeof(*p3));

    strcpy((*p3).name, "Dynamic struct");
    p3->sex = f;

    printf("Hello, %s, %c\n", p1.name, p1.sex);
    printf("Hello, %s, %c\n", p2.name, p2.sex);
    printf("Hello, %s, %c\n", p3->name, p3->sex);
}