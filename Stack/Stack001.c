/*
    title: StackPush.c
    date: 24-January-2021
    ? description: Program for Push, Pull, Display, and Print 
*/

#include <stdio.h>
#include <stdlib.h>

int SIZE = 5;
int STACK[5];
int tos = -1;

int isEmpty()
{
    if (tos == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (tos == SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int value)
{

    if (!isFull())
    {
        tos = tos + 1;
        STACK[tos] = value;
    }
    else
    {
        printf("Stack Overflow");
    }
}

int pop()
{
    int data;
    if (!isEmpty())
    {
        data = STACK[tos];
        tos = tos - 1;
        return data;
    }
    else
    {
        printf("Stack Underflow");
    }
}

int print()
{
    int i;
    if (isEmpty())
    {
        printf("Stack is empty!");
    }
    else
    {

        for (i = 0; i <= tos; i++)
        {
            printf("%d\n", STACK[i]);
        }
    }
}

int main()
{
    int choice;
    int value;
    system("clear");

    do
    {

        printf("\nSelect to proceed:\n");
        printf("\n\t1 - Push");
        printf("\n\t2 - Pop");
        printf("\n\t3 - Display");
        printf("\n\t4 - Exit\n");
        scanf("%d", &choice);
        system("clear");

        switch (choice)
        {
        case 1:
            printf("\nValue: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("\nPopped Value: %d", pop());
            break;
        case 3:
            print();
            break;
        default:
            break;
        }
    } while (choice != 4);
    return 0;
}
