#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        scanf("%i", &n);
    } while (n < 1 && n > 10);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &ar[i]);
    }
    long long int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x + ar[i];
    }
    printf("%lld\n", x);
}