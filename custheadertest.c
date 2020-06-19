#include <stdio.h>
#include "custheader.h"

int main (void)
{
    int n1 = 10, n2 = 5;

    printf("Add: %i\n", add(n1, n2));
    printf("Mul: %i\n", mul(n1, n2));
}