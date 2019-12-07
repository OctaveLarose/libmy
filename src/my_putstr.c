/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Prints every character of a string
*/

#include "my.h"

int my_putstr(char const *str)
{
	if (str == NULL)
		return (-1);
	for (int i = 0; str[i] != '\0'; i++)
		my_putchar(str[i]);
	return (0);
}
