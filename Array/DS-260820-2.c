/*
    title: DS-260820-2.c
    date: 26-August-2020
    ? description: Write a program to search a particular number in dynamic array. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *number_array, *copy_of_array, array_size, number_to_search, i, found = 0;
    system("clear");

    printf("\nArray Size? ");
    scanf("%d", &array_size);

    number_array = (int *)malloc(array_size * sizeof(int));
    copy_of_array = number_array;

    for (i = 0; i < array_size; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &*number_array);
        number_array++;
    }

    system("clear");

    number_array = copy_of_array;

    printf("\nSearch for? ");
    scanf("%d", &number_to_search);

    for (i = 0; i < array_size; i++)
    {
        if (*number_array == number_to_search)
        {
            found = 1;
        }

        number_array++;
    }

    if (found)
    {
        printf("\nEntry available.");
    }
    else
    {
        printf("\nEntry not available.");
    }

    return 0;
}
