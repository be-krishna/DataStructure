/*
    title: DS-260820-4.c
    date: 26-August-2020
    description: Write a program to insert a particular number at given position in dynamic array. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array, *copy_of_array, array_size, insert_position, insert_item, i;
    system("cls");

    printf("\nArray Size? ");
    scanf("%d", &array_size);

    array = (int *)malloc(array_size * sizeof(int));
    copy_of_array = array;

    for (i = 0; i < array_size; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &*array);
        array++;
    }

    array = copy_of_array;

    system("cls");

    printf("\nInsert at position? ");
    scanf("%d", &insert_position);

    printf("\nNumber to be inserted? ");
    scanf("%d", &insert_item);

    if (insert_position >= array_size + 1)
    {
        printf("\nInsertion not possible!");
    }
    else
    {
        for (i = insert_position - 1; i < array_size - 1; i++)
        {
            array[i + 1] = array[i];
        }
    }

    system("cls");

    printf("Resultant Array:");

    for (i = 0; i < array_size - 1; i++)
    {
        printf("\n%d", *array);
        array++;
    }

    return 0;
}
