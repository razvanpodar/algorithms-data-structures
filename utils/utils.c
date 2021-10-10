#include "utils.h"

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int* generate_array(int size, int max)
{
    int *array = (int*)malloc(sizeof(int) * size); 
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        int r = rand() % max;
        array[i] = r;
    }

    return array;
}