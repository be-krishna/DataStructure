/*
    title: DS-160920-1.c
    date: 15-September-2020
    description: Write a program to create a double linked list and traverse them in forward and backward direction 
*/

#include <stdio.h>
#include <stdlib.h>

struct dlist
{
    int n;
    struct dlist *next, *prev;
} * start, *node;

void create();
void display();

int main()
{
    system("clear");
    create();
    display();
    return 0;
}

void create()
{
    int i;
    node = (struct dlist *)malloc(sizeof(struct dlist));
    start = (struct dlist *)malloc(sizeof(struct dlist));

    start->next = node;
    node->prev = NULL;
    for (i = 1; i < 5; i++)
    {
        printf("\nEnter no in DLL: ");
        scanf("%d", &node->n);
        node->next = (struct dlist *)malloc(sizeof(struct dlist));
        node->next->prev = node;
        node = node->next;
    }
    printf("\nEnter no in DLL: ");
    scanf("%d", &node->n);
    node->next = NULL;
}

void display()
{
    int i = 0;
    printf("\nList through forward traversing: ");
    node = start->next;
    while (node->next)
    {
        printf("%d", node->n);
        node = node->next;
    }

    printf("\n%d", node->n);
    printf("\nList through backward traversing: ");
    while (node->prev)
    {
        printf("\n%d", node->n);
        node = node->prev;
    }
    printf("\n%d", node->n);
}
