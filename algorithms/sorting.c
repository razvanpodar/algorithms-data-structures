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

