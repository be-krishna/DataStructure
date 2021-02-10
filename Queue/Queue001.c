/*
    title: Queue001.c
    date: 06-February-2021
    ? description: Program to demonstrate Queue operations 
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int queue[SIZE];
int front = -1;
int rear = -1;

void insert(int data)
{
    if (rear >= SIZE - 1)
    {
        printf("Queue Overflow");
    }
    else if (rear == -1)
    {
        rear++;
        queue[rear] = data;
        front = 0;
    }
    else if (rear >= 0 && rear < SIZE - 1)
    {
        rear++;
        queue[rear] = data;
    }
}
int delete ()
{
    int data;
    if (front == -1)
    {
        printf("Queue underflow");
    }
    else if (front >= 0 && front < SIZE - 1)
    {
        data = queue[front];
        front++;
        return data;
    }
    else if (front == SIZE - 1)
    {
        data = queue[front];
        front = -1;
        return data;
    }
}
void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("\n");
        for (i = front; i < rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}
int main()
{
    int choice;
    int data;
    system("clear");

    while (1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nValue to insert: ");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            printf("\nDeleted Value: %d", delete ());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong choice!");
            break;
        }
    }

    return 0;
}
