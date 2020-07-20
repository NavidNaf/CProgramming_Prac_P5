#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));

    //best practice
    if (list == NULL)
        return 1;

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //copying (lengthy procedure)(dumb)
    int *tmp = realloc(list, 4 * sizeof(int));

    list = tmp;
    tmp[3] = 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
}