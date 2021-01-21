/*
    title: DLLInsertAsLastNode.c
    date: 22-January-2021
    ? description: Write a program to insert a node as last node in Double linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail = NULL;

void addNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (head == NULL)
    {
        head = tail = newNode;
        head->prev = NULL;
        tail->next = NULL;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = NULL;
    }
}

void display()
{
    struct node *current = head;

    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("Nodes of doubly linked list:\n");

    while (current != NULL)
    {
        printf("%d \n", current->data);
        current = current->next;
    }
}

void insertAsLastNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    tail->next = newNode;
    newNode->next = NULL;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    display();

    insertAsLastNode(10);

    display();

    return 0;
}
