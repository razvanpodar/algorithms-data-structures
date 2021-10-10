#include "utils.h"

void print_array(const char *msg, int *array, int size)
{
    printf(msg);
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

bool is_sorted(int *array, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (array[i - 1] > array[i])
            return false;
    }
    return true;
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