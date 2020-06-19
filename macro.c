#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

int main(void)
{
    int n1, n2;

    printf("Value 1: ");
    scanf("%i", &n1);
    printf("Value 2: ");
    scanf("%i", &n2);

    printf("Larger: %i", MAX(n1, n2));
}