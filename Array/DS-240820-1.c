/*
title: DS-240820-1.c
date: 24-08-2020
description:  Write a program in C to create an array and traverse them.
*/

#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

void create(int a[], int n);

int main()
{
    int a[10], i;
    system("clear");

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter value in array: ");
        scanf("%d", &a[i]);
    }

    create(a, 10);
    // getch();

    return 0;
}

void create(int a[], int n)
{
    int i;
    printf("\nElement of array:");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
}
