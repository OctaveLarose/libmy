/*
** EPITECH PROJECT, 2017
** my_showstr
** File description:
** Prints a string except when it doesn't really
*/

#include "my.h"

void convert_to_hexad(char c)
{
	int a = 0;
	char str[3];
	char base[] = "0123456789abcdef";
	int i = 0;

	my_putchar(92);
	while (c != 0) {
		a = c % 16;
		str[i] = base[a];
		c /= 16;
		i++;
	}
	if (1 < i)
		my_putchar(str[1]);
	else
		my_putchar('0');
	my_putchar(str[0]);
}

int my_showstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32)
			convert_to_hexad(str[i]);
		else
			my_putchar(str[i]);
		i++;
	}
	return (0);
}
