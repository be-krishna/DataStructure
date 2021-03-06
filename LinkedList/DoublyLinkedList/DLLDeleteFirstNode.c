/*
    title: DS-170920-1.c
    date: 17-September-2020
    ? description: Write a program to delete the first node from the given double linked list. 
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int n;
    struct node *next, *prev;
} * start, *node;

void create();
void display();
void deleteFirst();

int main()
{
    system("clear");

    create();
    display();
    deleteFirst();
    display();

    return 0;
}

void create()
{
    int i;
    node = (struct node *)malloc(sizeof(struct node));
    start = (struct node *)malloc(sizeof(struct node));

    start->next = node;
    node->prev = NULL;

    for (i = 1; i < 5; i++)
    {
        printf("\nEnter no in DLL: ");
        scanf("%d", &node->n);
        node->next = (struct node *)malloc(sizeof(struct node));
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

void deleteFirst()
{
    node = start->next;
    start->next = node->next;
    node->next->prev = NULL;
    free(node);
}
