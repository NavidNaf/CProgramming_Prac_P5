#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
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

    int k;
    int *vfind;
    do
    {
        printf("Value to Find: ");
        scanf("%i", &k);
    } while (k < 1);

    qsort(ara, n, sizeof(int), compare);

    vfind = (int*) bsearch(&k, ara, n, sizeof(int), compare);

    if (vfind != NULL)
        printf("Value: %i", *vfind);
    else
        printf("Value not found.");
}