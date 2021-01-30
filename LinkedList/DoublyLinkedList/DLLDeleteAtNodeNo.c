/*
    title: DLLDeleteAtNodeNo.c
    date: 22-January-2021
    ? description: Write a program to delete a node from double linked list at given position. 
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};

struct node *head, *tail = NULL;

void addNode(int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if(head == NULL){
        head = tail = newNode;
        head->prev = NULL;
        tail->next = NULL;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = NULL;
    }
}

void display(){
    struct node *current = head;

    if(head == NULL){
        printf("List is empty!");
        return;
    }

    printf("Node of the list are: \n");

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void deleteAtPosition(int position){
    
    if(head == NULL){
        printf("List is empty!");
        return;
    }

    int i = 1;
    struct node *current = head;

    while (i < position)
    {
        current = current->next;
        i++;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;

    free(current);
}

int main()
{
    system("clear");

    addNode(1);
    addNode(3);
    addNode(2);
    addNode(4);

    display();

    deleteAtPosition(2);

    display();

    return 0;
}
