/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** Returns 1 if string is only composed of uppercase letters
*/

#include "my.h"

int my_str_isupper(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (-1);
	while (str[i] != '\0') {
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
