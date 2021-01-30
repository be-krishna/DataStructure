/*
    title: DLLDeleteAtNodeNo.c
    date: 22-January-2021
    ? description: Write a program to create a circular linked list.
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};

struct node *head, *tail = NULL;

void addNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (head == NULL)
    {
        head = tail = newNode;
        head->next = tail->next = NULL;
        head->prev = tail->prev = NULL;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = head;
        head->prev = tail;
    }
}

void display()
{
    struct node *current = head;

    if (head == NULL)
    {
        printf("List is empty!");
        return;
    }

    printf("Node of the list are: \n");

    printf("%d\n", current->data);
    current = current->next;

    while (current != head)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}


int main()
{
    system("clear");

    addNode(1);
    addNode(3);
    addNode(2);
    addNode(4);

    display();

    return 0;
}
