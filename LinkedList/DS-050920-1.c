/*
    title: DS-050920-1.c
    date: 05-September-2020
    description: Write a program to create a single linked list and insert a node as a first node. 
*/

#include <stdio.h>
#include <stdlib.h>

struct slist
{
    int n;
    struct slist *next;
} * node, *start, *newnode;

void create();
void display();
void insertfirst();

int main()
{
    system("cls");
    create();

    printf("\nList before insertion: ");
    display();

    insertfirst();

    printf("\nAfter insertion: ");
    display();

    return 0;
}

void create()
{
    int i;
    node = (struct slist *)malloc(sizeof(struct slist));

    start = (struct slist *)malloc(sizeof(struct slist)); //! Need to intialize start node

    start->next = node;
    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter no in node: ");
        scanf("%d", &node->n);
        node->next = (struct slist *)malloc(sizeof(struct slist));
        node = node->next;
    }

    printf("\nEnter no in node: ");
    scanf("%d", &node->n);
    node->next = NULL;
}

void display()
{
    node = start->next;

    while (node->next)
    {
        printf("\n%d", node->n);
        node = node->next;
    }
    printf("\n%d", node->n);
}

void insertfirst()
{
    newnode = (struct slist *)malloc(sizeof(struct slist));
    printf("\nEnter no in new node: ");
    scanf("%d", &newnode->n);
    node = start->next;
    start->next = newnode;
    newnode->next = node;
}
