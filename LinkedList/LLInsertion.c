/*
    title: DS-020920-3.c
    date: 03-September-2020
    ? description: Write a program to input any numbers of value until user wants in a single linked list and print them perform these operation through user defined function. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct slist
{
    int num;
    struct slist *next;
};

struct slist *start = NULL;
struct slist *node = NULL;

void create();
void traverse();

int main()
{
    system("clear");

    create();
    traverse();

    return 0;
}

void create()
{
    char ch = 'y';
    node = (struct slist *)malloc(sizeof(struct slist));
    start = node;

    while (ch == 'y' || ch == 'Y')
    {
        printf("\nEnter a number: ");
        scanf("%d", &node->num);

        node->next = (struct slist *)malloc(sizeof(struct slist));

        node = node->next;

        node->next = NULL;

        printf("\nContinue (y/n): ");
        scanf("%c", &ch);
    }
}

void traverse()
{
    node = start;
    printf("\nValue of linked list");
    while (node->next)
    {
        printf("\n%d", node->num);
        node = node->next;
    }
}
