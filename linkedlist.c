//List of Number with linked list

#include <stdio.h>
#include <stdlib.h>

//representation of a node
typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    //list to Size 0
    node *list = NULL;

    //adding element 1
    node *n = malloc(sizeof(node));
    if (n == NULL)
        return 1;
    n->number = 1;
    n->next = NULL;
    list = n;

    //adding element 2
    n = malloc(sizeof(node));
    if (n == NULL)
        return 1;
    n->number = 2;
    n->next = NULL;
    list->next = n;

    //adding element 3
    n = malloc(sizeof(node));
    if (n == NULL)
        return 1;
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    //adding element 4
    n = malloc(sizeof(node));
    if (n == NULL)
        return 1;
    n->number = 4;
    n->next = NULL;
    list->next->next->next = n;

    //print list
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    //free list
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}