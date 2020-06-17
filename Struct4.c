#include <stdio.h>

typedef struct
{
    char first[40];
    char last[40];
} nametype;

typedef struct
{
    int id;
    nametype name;
} student;

int main(void)
{
    student one[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &one[i].id);
        scanf("%s", one[i].name.first);
        scanf("%s", one[i].name.last);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("ID: %i\n", one[i].id);
        printf("Name: %s %s\n", one[i].name.first, one[i].name.last);
    }
}