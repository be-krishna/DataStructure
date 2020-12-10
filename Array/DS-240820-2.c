/*
    title: DS-240820-2.c
    date: 29-August-2020
    ? description: Write a program to create a dynamic array_pointer and illustrate the increment and decrement of memory at runtime.1 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array_pointer, *begin_address, array_size, i;
    system("cls");

    printf("\nEnter the Size of Array: ");
    scanf("%d", &array_size);

    array_pointer = (int *)malloc(array_size * sizeof(int)); //? pointer begining address
    begin_address = array_pointer;                           //? copy begining address

    for (i = 1; i <= array_size; i++)
    {
        printf("\nEnter array_pointer item: ");
        scanf("%d", &*array_pointer);
        array_pointer++;
    }

    system("cls");
    printf("Contents of the array:");

    array_pointer = begin_address; //? set pointer at start of array

    for (i = 1; i <= array_size; i++)
    {
        printf("\n%d", *array_pointer);
        array_pointer++;
    }

    //// array_pointer = NULL; //! Set pointer to null in order to reallocate memory
    array_pointer = begin_address; //! Or set the pointer to begining

    // system("cls");
    printf("\nNew Array Size? ");
    scanf("%d", &array_size);

    array_pointer = (int *)realloc(array_pointer, array_size * sizeof(int));
    begin_address = array_pointer;

    for (i = 1; i <= array_size; i++)
    {
        printf("\nEnter Array Item: ");
        scanf("%d", &(*array_pointer));
        array_pointer++;
    }
    system("cls");
    printf("Contents of Array: ");
    array_pointer = begin_address;

    for (i = 1; i <= array_size; i++)
    {
        printf("\n%d", *array_pointer);
        array_pointer++;
    }

    return 0;
}
