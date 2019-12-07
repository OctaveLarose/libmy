/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** Returns square root of a number, if its square root is a whole number.
*/

#include "my.h"

int my_compute_square_root(int nb)
{
	int i = 0;

	while (i < nb + 1) {
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
