/*
    title: DS-050920-2.c
    date: 06-September-2020
    description: write a program to insert a node as a last node in single linked list 
*/

#include <stdio.h>
#include <stdlib.h>

struct slist
{
    int n;
    struct slist *next;
} *node, *start, *newnode;

void create();
void display();
void insertlast();

int main(void)
{
    system("cls");

    create();
    printf("\nList before insertion: ");
    
    display();
    
    insertlast();
    printf("\nList after insertion ");

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

void insertlast()
{
    newnode = (struct slist *)malloc(sizeof(struct slist));
    printf("\nEnter no in new node: ");
    scanf("%d", &newnode->n);
    node = start->next;
    while (node->next)
    {
        node = node->next;
    }

    node->next = newnode;
    newnode->next = NULL;
}
