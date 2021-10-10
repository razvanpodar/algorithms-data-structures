#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void print_array(const char *msg, int *array, int size);
bool is_sorted(int *array, int size);
void swap(int *array, int i, int j);
int* generate_array(int size, int max);