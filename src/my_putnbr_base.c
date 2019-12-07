/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Displays a decimal into a number in a given base
*/

#include "my.h"

int calculate_str_size(long nbr, int base_number)
{
	int i = 0;

	while (nbr != 0) {
		nbr /= base_number;
		i++;
	}
	return (i);
}

int my_putnbr_base(long nbr, char *base)
{
	int base_number = my_strlen(base);
	long a = 0;
	int i = 0;
	char *str = malloc(calculate_str_size(nbr, base_number));

	if (str == NULL)
		return (-1);
	if (nbr < 0) {
		nbr *= (-1);
		my_putchar('-');
	}
	while (nbr != 0) {
		a = nbr % base_number;
		str[i] = base[a];
		nbr /= base_number;
		i++;
	}
	str = my_revstr(str);
	my_putstr(str);
	return (my_getnbr(str));
}
