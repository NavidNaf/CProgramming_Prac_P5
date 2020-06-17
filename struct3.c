#include <stdio.h>

struct nametype{
    char first[40];
    char last[40];
};

struct student{
    int id;
    struct nametype name;
};

int main (void)
{
    struct student one;

    scanf("%i", &one.id);
    scanf("%s", one.name.first);
    scanf("%s", one.name.last);

    printf("ID: %i\n", one.id);
    printf("Name: %s %s", one.name.first, one.name.last);
}