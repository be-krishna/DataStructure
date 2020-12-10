/*
    title: DS-050920-3.c
    date: 08-September-2020
    description: Write a program to create a single linked list and insert a node as a desired node on the basis of node number. 
*/

#include <stdio.h>
#include <stdlib.h>

struct slist
{
    int n;
    struct slist *next;
} * start, *node, *newnode;

void create();
void display();
void insertatposition();

int main(void)
{
    // system("cls");

    create();

    printf("\nList before insertion: ");

    display();

    insertatposition();

    printf("\nList after insertion: ");

    display();

    return 0;
}

void create()
{
    int i;
    node = (struct slist *)malloc(sizeof(struct slist));
    start = (struct slist *)malloc(sizeof(struct slist));
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

void insertatposition()
{
    int i = 1, p;

    newnode = (struct slist *)malloc(sizeof(struct slist));
    printf("\nEnter no in new node: ");
    scanf("%d", &newnode->n);

    printf("\nEnter the position: ");
    scanf("%d", &p);
    node = start->next;

    //TODO: Check Error: Can't insert at pos 1

    while (i < (p - 1))
    {
        node = node->next;
        i++;
    }

    newnode->next = node->next->next;
    node->next = newnode;
}
