/*
    title: DS-010920-1.c
    date: 01-September-2020
    description: Write a program to create a linked list having 4 nodes and print them 
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int a;
    struct list *next;
};

int main()
{

    struct list *node1 = NULL;
    struct list *node2 = NULL;
    struct list *node3 = NULL;
    struct list *node4 = NULL;

    //* Changes
    node1 = (struct list *)malloc(sizeof(struct list));
    node2 = (struct list *)malloc(sizeof(struct list));
    node3 = (struct list *)malloc(sizeof(struct list));
    node4 = (struct list *)malloc(sizeof(struct list));

    system("cls");

    printf("\nEnter first value in node: ");
    scanf("%d", &node1->a);
    printf("\nEnter first value in node: ");
    scanf("%d", &node2->a);
    printf("\nEnter first value in node: ");
    scanf("%d", &node3->a);
    printf("\nEnter first value in node: ");
    scanf("%d", &node4->a);

    system("cls");

    printf("\nValues of linked list: ");
    printf("\n%d", node1->a);
    printf("\n%d", node2->a);
    printf("\n%d", node3->a);
    printf("\n%d", node4->a);

    return 0;
}
