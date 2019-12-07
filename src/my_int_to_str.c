/*
** EPITECH PROJECT, 2017
** my_int_to_str.c
** File description:
** Turns an int into a str
*/

#include "my.h"

int get_nbr_len(int nbr)
{
	int nbr_len = 0;
	int tens_pow = 1;

	if (nbr == 0 || nbr == 1)
		return (1);
	while (nbr % tens_pow != nbr) {
		tens_pow *= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char *my_int_to_str(int nbr)
{
	int nbr_len = get_nbr_len(nbr);
	char *str = malloc(nbr_len + 1);
	int tens_pow = 1;
	int i = 0;

	if (str == NULL) {
		print_error("Error with malloc (my_int_to_str)\n");
		return (NULL);
	}
	for (int i = 0; i < nbr_len - 1; i++)
		tens_pow *= 10;
	while (i < nbr_len) {
		str[i] = nbr / tens_pow + '0';
		nbr = nbr % tens_pow;
		tens_pow /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
