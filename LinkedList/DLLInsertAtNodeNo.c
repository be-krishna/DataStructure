/*
    title: DS-170920-3.c
    date: 17-September-2020
    description: Write a program to insert a node at desired position in double linked list 
*/

#include <stdio.h>
#include <stdlib.h>

struct dlist
{
    int n;
    struct dlist *next;
} * start, *node, *newnode;

void create();
void display();
void insertatposition();

int main()
{
    system("clear");

    create();
    display();
    insertatposition();
    display();

    return 0;
}

void create(args)
{
    int i;
    node = (struct dlist *)malloc(sizeof(struct dlist));
    start = (struct dlist *)malloc(sizeof(struct dlist));
}
