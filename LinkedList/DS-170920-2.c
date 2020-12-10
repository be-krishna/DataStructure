/*
    title: DS-170920-1.c
    date: 17-September-2020
    description: Write a program to delete the last node from the given double linked list. 
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
void deleteLast();

int main()
{
    system("clear");

    create();
    display();
    deleteLast();
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
    printf("\nList: ");
    node = start->next;

    while (node->next)
    {
        printf("\n%d", node->n);
        node = node->next;
    }

    printf("\n%d", node->n);
}

void deleteLast()
{
    node = start->next;
    while (node->next->next)
    {
        node = node->next;
    }
    free(node->next);
    node->next = NULL;
}
