#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int));
    //y = malloc(sizeof(int));

    *x = 42;
    *y = 39;

    printf("%i \n%i", *x, *y);
}