#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main(void)
{
    int n;
    printf("Size of Array: ");
    scanf("%i", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %i: \n", i + 1);
        scanf("%i", &ara[i]);
    }

    qsort(ara, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%i, ", ara[i]);
    }
}