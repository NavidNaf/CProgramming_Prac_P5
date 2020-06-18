#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *marks;
    int n;
    printf("Size of Array: ");
    scanf("%i", &n);

    marks = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i: %i\n", i + 1, marks[i]);
    }

    free(marks);
}