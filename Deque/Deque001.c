#include <stdio.h>
#include <stdlib.h>
#define MAX 7

int deque_arr[MAX];
int front = -1;
int rear = -1;

int isFull()
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

void insert_front(int item)
{
    if (isFull())
    {
        printf("\nQueue Overflow");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else if (front == 0)
    {
        front = MAX - 1;
    }
    else
    {
        front = front - 1;
    }
    deque_arr[front] = item;
}

void insert_end(int item)
{
    if (isFull())
    {
        printf("\nQueue OverFlow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
        deque_arr[rear] = item;
    }
}

int delete_front()
{
    int item;
    if (isEmpty())
    {
        printf("\nQueue Underflow\n");
        exit(1);
    }
    item = deque_arr[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front = front + 1;
        return item;
    }
}

int delete_end()
{
    int item;
    if (isEmpty())
    {
        printf("\nQueue underflow!");
        exit(1);
    }

    item = deque_arr[rear];
    if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = MAX - 1;
    else
        rear = rear - 1;
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("\nQueue is Empty!");
        return;
    }
    printf("\nQueue Elements: \n");
    i = front;
    if (front <= rear)
    {
        while (i <= rear)
        {
            printf("%d", deque_arr[i++]);
        }
    }
    else
    {
        while (i <= MAX - 1)
        {
            printf("\n%d", deque_arr[i++]);
        }
        i = 0;
        while (i <= rear)
        {
            printf("\n%d", deque_arr[i++]);
        }
    }
    printf("\n");
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("\n\n1.Insert at front\n");
        printf("2.Insert at rear\n");
        printf("3.Delete from front\n");
        printf("4.Delete from rear\n");
        printf("5.Display\n");
        printf("6.Quit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nInput element: ");
            scanf("%d", &item);
            insert_front(item);
            break;
        case 2:
            printf("\nInput element: ");
            scanf("%d", &item);
            insert_end(item);
            break;
        case 3:
            printf("\nDeleted element: %d\n", delete_front());
            break;
        case 4:
            printf("\nDeleted element: %d\n", delete_end());
            break;
        case 5:
            display();
            break;
        case 6:
            exit(1);
        default:
            printf("\nWrong Choice\n");
            break;
        }
        printf("\nfront = %d, rear = %d\n", front, rear);
    }
}
