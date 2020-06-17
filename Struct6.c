#include <stdio.h>

typedef struct
{
    int d;
    int m;
    int y;
} dateofb;

typedef struct
{
    char name[40];
    char fathers_name[40];
    char mothers_name[40];
    dateofb date;
    int id;
} nid;

int main(void)
{
    nid national;
    printf("Name: \n");
    scanf("%s", national.name);
    printf("Fathers Name: \n");
    scanf("%s", national.fathers_name);
    printf("Mothers Name: \n");
    scanf("%s", national.mothers_name);
    printf("Day: \n");
    scanf("%i", &national.date.d);
    printf("Month: \n");
    scanf("%i", &national.date.m);
    printf("Year: \n");
    scanf("%i", &national.date.y);
    printf("ID:\n");
    scanf("%i", &national.id);

    printf("Name: %s\n", national.name);
    printf("Fathers Name: %s\n", national.fathers_name);
    printf("Mothers Name: %s\n", national.mothers_name);
    printf("Date of Birth: %i / %i / %i\n", national.date.d, national.date.m, national.date.y);
    printf("ID: %i", national.id);
}