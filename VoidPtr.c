#include <stdio.h>

int main(void)
{
    void *ptr;
    int n = 10;
    ptr = &n;

    printf("n: %i", *((int*)ptr));
}