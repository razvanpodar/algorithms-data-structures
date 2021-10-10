#include "sorting.h"

void bubble_sort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int aux = array[j];
                array[j] = array[i];
                array[i] = aux; 
            }
        }
    }
}

void insertion_sort(int *array, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

