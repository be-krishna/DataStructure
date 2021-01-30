/*
    title: DLLDeleteByInfo.c
    date: 22-January-2021
    ? description: Write a program to delete a node from the double linked list on the basis of info. 
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

    printf("Nodes of doubly linked list: \n");

    while (current != NULL)
    {
        printf("%d \n", current->data);
        current = current->next;
    }
}

void deleteByValue(int value)
{
    struct node *current = head;

    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    int i = 1;

    while (current->data != value)
    {
        current = current->next;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;

    free(current);
}

int main()
{
    system("clear");

    addNode(1);
    addNode(2);
    addNode(3);
    addNode(10);

    display();

    deleteByValue(3);

    display();

    return 0;
}
