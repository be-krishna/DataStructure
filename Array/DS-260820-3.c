/*
    title: DS-260820-3.c
    date: 26-August-2020
    ? description: Write a program to remove a particular number at a given position in dynamic array. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array, *copy_of_array, array_size, remove_position, i;
    system("clear");

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

    system("clear");

    printf("\nRemove at position? ");
    scanf("%d", &remove_position);

    if (remove_position >= array_size + 1)
    {
        printf("\nDeletion not possible!");
    }
    else
    {
        // remove position = 2
        for (i = 1; i < remove_position; i++)
        {
            array++;
        }

        for (i = remove_position - 1; i < array_size - 1; i++)
        {
            // array[i] = array[i + 1];
            *array = *(array + 1);
            array++;
        }
    }

    system("clear");

    printf("Resultant Array:");

    array = copy_of_array;

    for (i = 0; i < array_size - 1; i++)
    {
        printf("\n%d", *array);
        array++;
    }

    return 0;
}
