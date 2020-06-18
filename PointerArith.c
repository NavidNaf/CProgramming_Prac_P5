#include <stdio.h>

int main (void)
{
    int ara [] = {100, 200, 300};
    int *p;
    p = ara;

    printf("*p: %i\n", *p);
    printf("*p + 1: %i\n", *p + 1);
    printf("*(p + 1): %i\n", *(p + 1));
    printf("*p + 2: %i\n", *p + 2);
    printf("*(p + 2): %i\n", *(p + 2));
}