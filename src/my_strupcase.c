/*
** EPITECH PROJECT, 2017
** my_strupcase
** File description:
** Makes letters uppercase
*/

#include "my.h"

char *my_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
