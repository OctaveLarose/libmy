/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** Calculates nb power p
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
	if (p == 0)
		return (1);
	if (p == 1)
		return (nb);
	if (p != 0 && p != 1)
		return (nb * my_compute_power_rec(nb, p - 1));
	return (0);
}
