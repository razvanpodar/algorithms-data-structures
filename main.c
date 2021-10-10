#include <stdio.h>
#include "utils/utils.h"
#include "./algorithms/sorting.h"

int main(void)
{
    int size = 10;
    int max = 999;
    int *array;
    array = generate_array(size, max);
    printf("Initial array: ");
    print_array(array, size);
    bubble_sort(array, size);
    printf("Sorted array: ");
    print_array(array, size);
    return 0;
}