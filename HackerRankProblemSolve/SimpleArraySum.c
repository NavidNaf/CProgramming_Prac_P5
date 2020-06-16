#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        scanf("%i", &n);
    } while (n < 0);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &ar[i]);
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x + ar[i];
    }
    printf("%i\n", x);
}