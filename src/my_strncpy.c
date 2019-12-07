/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** Copies n characters of a string into another
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (i < n) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
