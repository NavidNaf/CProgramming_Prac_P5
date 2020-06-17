#include <stdio.h>

typedef struct
{
    int p;
    int q;
} rational;

int add(int a, int b)
{
    return a + b;
}

int min(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int equal(int a, int b)
{
    if (a == b)
        return 1;
    else
        return 0;
}

int main(void)
{
    rational numbers;
    printf("P:");
    scanf("%i", &numbers.p);
    scanf("%i", &numbers.q);

    int equality = equal(numbers.p, numbers.q);
    if (equality == 1)
        printf("Equal.\n");
    else
        printf("Not Equal.\n");



    printf("+: %i\n", add(numbers.p, numbers.q));
    printf("-: %i\n", min(numbers.p, numbers.q));
    printf("*: %i\n", mul(numbers.p, numbers.q));
    printf("/: %i\n", div(numbers.p, numbers.q));
}
