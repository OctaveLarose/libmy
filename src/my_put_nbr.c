/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** Prints a number in the terminal
*/

#include "my.h"

int my_put_nbr(int nb)
{
	int tmp;

	if (nb < 0) {
		my_putchar('-');
		nb *= (-1);
	}
	tmp = nb % 10;
	if (nb / 10 > 0)
		my_put_nbr(nb / 10);
	tmp += '0';
	my_putchar(tmp);
	return (0);
}
