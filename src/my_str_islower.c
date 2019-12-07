/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** Returns 1 if string is only composed of lowercase letters
*/

#include "my.h"

int my_str_islower(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
