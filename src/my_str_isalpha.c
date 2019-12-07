/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** Returns 1 if string is only composed of letters
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
	int i = 0;
	int check = 0;

	while (str[i] != '\0') {
		if ('A' <= str[i] && str[i] <= 'Z')
			check++;
		if ('a' <= str[i] && str[i] <= 'z')
			check++;
		if (check == 0)
			return (0);
		check = 0;
		i++;
	}
	return (1);
}
