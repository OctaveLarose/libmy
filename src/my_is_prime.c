/*
** EPITECH PROJECT, 2017
** my_is_prime
** File description:
** Checks if a number is prime or not, returns 1 if it is and 0 if it isn't
*/

#include "my.h"

int my_is_prime(int nb)
{
	int i = 2;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb) {
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
