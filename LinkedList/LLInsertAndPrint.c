/*
    title: DS-020920-2.c
    date: 02-September-2020
    ? description: Write a program to input 4 values in linked list and print them 
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int a;
    struct list *next;
};

typedef struct list slist;

int main()
{
    slist *start = NULL;
    slist *node = NULL;

    //* Changes
    node = (slist *)malloc(sizeof(slist)); //? assign a block
    start = node;                          //? Store address of head

    int i;

    system("clear");

    for (i = 0; i < 4; i++)
    {
        printf("\nEnter value in order: ");
        scanf("%d", &node->a);

        node->next = (slist *)malloc(sizeof(slist));

        node = node->next;
        node->next = NULL;
    }

    node = start;

    printf("\nElements of linked list: ");
    while (node->next)
    {
        printf("\n%d", node->a);
        node = node->next;
    }

    return 0;
}
