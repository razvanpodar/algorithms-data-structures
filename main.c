#include <stdio.h>
#include <stdlib.h>
#include "utils/utils.h"
#include "./algorithms/sorting.h"

#define MAX 100

int main(void)
{
    int size = 10;
    int max = 50;
    int *array;

    while(1)
    {
        printf("\nChoose the algorithm\n");
        printf("1.Bubble sort\n");
        printf("2.Insertion sort\n");
        printf("3.Selection sort\n");
        printf("4.Merge sort\n");
        printf("5.Heap sort\n");
        printf("6.Quick sort\n");
        printf("0.Exit\n");

        int opt = -1;
        scanf("%d", &opt);

        array = generate_array(size, max);

        switch (opt)
        {
        case 0:
            return 0;
        case 1:
            print_array("Initial array: ", array, size);
            bubble_sort(array, size);
            print_array("Sorted array: ", array, size);
            printf("Sorted: ");
            is_sorted(array, size) ? printf("True"): printf("False");
            break;
        case 2:
            print_array("Initial array: ", array, size);
            insertion_sort(array, size);
            print_array("Sorted array: ", array, size);
            printf("Sorted: ");
            is_sorted(array, size) ? printf("True"): printf("False");
            break;
        case 3:
            print_array("Initial array: ", array, size);
            selection_sort(array, size);
            print_array("Sorted array: ", array, size);
            printf("Sorted: ");
            is_sorted(array, size) ? printf("True"): printf("False");
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            print_array("Initial array: ", array, size);
            quick_sort(array, 0, size - 1);
            print_array("Sorted array: ", array, size);
            printf("Sorted: ");
            is_sorted(array, size) ? printf("True"): printf("False");
            break;
        default:
            break;
        }
    }
    return 0;
}
