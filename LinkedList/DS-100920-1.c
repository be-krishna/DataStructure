/*
    title: DS-100920-1.c
    date: 10-September-2020
    description: Write a program to delete the first node from the given list 
*/

#include <stdio.h>
#include <stdlib.h>

struct slist
{
    int n;
    struct slist *next;
} * start, *node;

void create();
void display();
void deletefirst();

int main()
{
    system("cls");

    create();

    printf("\nList before deletion: ");
    display();

    deletefirst();

    printf("\nList after deletion: ");
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

void deletefirst()
{
    node = start->next;
    start->next = node->next;
    free(node);
}
