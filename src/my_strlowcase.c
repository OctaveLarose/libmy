/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** Makes letters lowercase
*/

#include "my.h"

char *my_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (65 <= str[i] && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
