#include "sorting.h"

void bubble_sort(int array[], int size)
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

void insertion_sort(int array[], int size)
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

void selection_sort(int array[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
        }

        if (min != i)
        {
            int aux = array[min];
            array[min] = array[i];
            array[i] = aux;
        }
    }
}

void quick_sort(int array[], int low, int high)
{
    if (low < high)
    {
        int index = partition(array, low, high);

        quick_sort(array, low, index - 1);
        quick_sort(array, index, high);
    }    
}

static int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
	if (array[j] <= pivot)
        {
            i++;
            int aux = array[i];
            array[i] = array[j];
            array[j] = aux;
        }
    }
    int aux = array[i + 1];
    array[i + 1] = array[high];
    array[high] = aux;           
    return (i + 1);
}
