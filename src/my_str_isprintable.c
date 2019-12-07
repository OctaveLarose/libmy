/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** Returns 1 if string is only composed of printable characters
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (-1);
	while (str[i] != '\0') {
		if (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
