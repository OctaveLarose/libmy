/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** Returns the smallest prime number greater or equal to number
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
	int i = 2;

	if (nb < 2)
		return (2);
	while (i < nb) {
		if (nb % i == 0) {
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}
