/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Prints every character of a string
*/

#include "my.h"

int my_strlen(char const *str)
{
	int strlen = 0;

	if (str == NULL)
		return (0);
	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}
