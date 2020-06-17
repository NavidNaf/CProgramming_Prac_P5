#include <stdio.h>
#include <string.h>

int main (void)
{
    struct student {
        int id;
        char name[40];
    };

    struct student first;

    scanf("%i", &first.id);
    scanf("%s", first.name);

    printf("ID: %i\n", first.id);
    printf("Name: %s\n", first.name);
}