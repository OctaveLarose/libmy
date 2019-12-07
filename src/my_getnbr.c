/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** Transforms a string into an int
*/

#include "my.h"

int my_getnbr(char const *str)
{
	int result = 0;
	int i = 0;
	int neg = 0;

	if (str[0] == '-') {
		neg = 1;
		i++;
	}
	while (str[i] != '\0') {
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (neg == 1)
		result *= -1;
	return (result);
}
