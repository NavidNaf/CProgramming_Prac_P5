#include <stdio.h>

int main(void)
{
    int n;

    printf("Value: ");
    scanf("%i", &n);

    switch (n)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    default:
        printf("Not Found.");
    }
}