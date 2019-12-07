/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** Duplicates a string
*/

#include "my.h"

char *my_strdup(char *str)
{
	char *str_clone = NULL;

	if (str == NULL)
		return (NULL);
	str_clone = malloc(my_strlen(str) + 1);
	if (str_clone == NULL)
		return (NULL);
	for (int i = 0; str[i] != 0; i++)
		str_clone[i] = str[i];
	str_clone[my_strlen(str)] = 0;
	return (str_clone);
}
