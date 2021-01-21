/*
    title: DS-050920-4.c
    date: 08-September-2020
    ? description: Write a program to create a single linked list and insert a node as a desired node on the basis of informationo. 
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
void insertbyinfo();

int main()
{
    // system("clear");

    create();

    printf("\nList before insertion");
    display();

    insertbyinfo();

    printf("\nList after insertion");
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

void insertbyinfo()
{
    newnode = (struct slist *)malloc(sizeof(struct slist));

    printf("\nEnter no in new node: ");
    scanf("%d", &newnode->n);

    node = start->next;

    while (node->next)
    {
        //TODO: Add condition for number less than head node value and number greater than head no
        if (node->n < newnode->n && node->next->n > newnode->n)
        {
            newnode->next = node->next->next;
            node->next = newnode;
        }
        else
        {
            node = node->next;
        }
    }
}
