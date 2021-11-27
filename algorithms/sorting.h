#pragma once
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void bubble_sort(int array[], int size);
void insertion_sort(int array[], int size);
void selection_sort(int array[], int size);
int* merge_sort(int array[], int size);
int* merge(int array1[], int size1, int array2[], int size2);
void heap_sort(int array[], int size);
void quick_sort(int array[], int low, int high);
static int partition(int array[], int low, int high);
