#include <stdio.h>

int main (void)
{
    struct student {
        int id;
        char *name;
    };

    struct student first;

    first.id = 01;
    first.name = "Naf";

    printf("ID: %i\n", first.id);
    printf("Name: %s\n", first.name);
}