#include "stdio.h"

void typedefFn()
{
    typedef int my_int;

    my_int i = 137;
    printf("My int: %i\n", i);


    struct my_Person {
        char name[50];
        int age;
    };
    typedef struct my_Person Person;
    Person me = {
            "Johnny Rocket",
            29
    };

    typedef struct my_Student {
        char name[50];
        int age;
    } Student;
    Student al = {
            "Albert Zubov",
            29,
    };

    printf("Person me: %s, %i\n", me.name, me.age);
    printf("Student al: %s, %i\n", al.name, al.age);
}