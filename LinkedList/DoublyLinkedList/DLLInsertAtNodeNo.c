/*
    title: DS-170920-3.c
    date: 17-September-2020
    ? description: Write a program to insert a node at desired position in double linked list 
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

void display(){
    struct node *current = head;
    if(head == NULL){
        printf("List is empty!\n");
        return;
    }

    printf("Node values: \n");

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    
}

void insertAtPosition(int position, int data)
{
    int i = 1;
    struct node *current = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    while (i < (position -1))
    {
        current = current->next;
        i++;
    }

    newNode->prev = current;
    newNode->next = current->next;
    current->next = newNode;
    
}

int main(){
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    display();

    insertAtPosition(4, 10);

    display();

    return 0;
}
