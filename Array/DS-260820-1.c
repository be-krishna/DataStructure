/*
    title: DS-260820-1.c
    date: 26-August-2020
    description: Write a program to create a dynamic array and print all the data 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *p1, n, i;
    system("cls");

    printf("\nEnter the size of Array: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));
    p1 = p;
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter the number in dynamic array: ");
        scanf("%d", &*p);
        p++;
    }
    printf("\nContents of dynamic array: ");
    p = p1;

    for (i = 1; i <= n; i++)
    {
        printf("\n%d", *p);
        p++;
    }

    return 0;
}
