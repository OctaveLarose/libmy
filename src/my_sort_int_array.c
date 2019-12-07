/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** Sorts an integer array in ascending order. Bubblesorting.
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
	int i = 0;

	while (check_if_sorted(array, size) == 0) {
		if (array[i] > array[i + 1])
			my_swap(&array[i], &array[i + 1]);
		i++;
		if (i == size - 1)
			i = 0;
	}
}

int check_if_sorted(int *array, int size)
{
	int i = 0;

	while (i < size - 1) {
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
