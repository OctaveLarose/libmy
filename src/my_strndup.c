/*
** EPITECH PROJECT, 2018
** my_strndup.c
** File description:
** Duplicates a string
*/

#include "my.h"

char *my_strndup(char *str, int n)
{
	char *str_clone = NULL;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != 0 && i < n)
		i++;
	str_clone = malloc(i + 2);
	i = 0;
	if (str_clone == NULL)
		return (NULL);
	while (str[i] != 0 && i < n) {
		str_clone[i] = str[i];
		i++;
	}
	str_clone[i] = 0;
	return (str_clone);
}
