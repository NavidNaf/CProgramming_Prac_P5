#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main(void)
{
    int (*fnc)(int, int);

    int n1 = 10, n2 = 5;

    fnc = &add;
    printf("Add: %i\n", fnc(n1, n2));

    fnc = &sub;
    printf("Sub: %i\n", fnc(n1, n2));
}