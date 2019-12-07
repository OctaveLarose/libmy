/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** Swaps the content of two integers
*/

#include "my.h"

void my_swap(int *a, int *b)
{
	int acopy = 0;
	int bcopy = 0;

	acopy = *a;
	bcopy = *b;
	*a = bcopy;
	*b = acopy;
}
