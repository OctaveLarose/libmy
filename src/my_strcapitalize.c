/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** Capitalizes the first letter of each word
*/

#include "my.h"

int check(char *str, int i)
{
	if ('0' <= str[i] && str[i] <= '9')
		return (0);
	if ('A' <= str[i] && str[i] <= 'Z')
		return (0);
	if ('a' <= str[i] && str[i] <= 'z')
		return (0);
	return (1);
}

char *my_strcapitalize(char *str)
{
	int i = 1;

	str = my_strlowcase(str);
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0') {
		if ('a' <= str[i] && str[i] <= 'z' && (check(str, i - 1) == 1))
			str[i] -= 32;
		i++;
	}
	return (str);
}
