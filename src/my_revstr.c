/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** Reverses a string
*/

#include "my.h"

char *my_revstr(char *str)
{
	int i = 0;
	int j = my_strlen(str) - 1;
	char *str_rev = malloc(sizeof(char) * my_strlen(str) + 1);

	if (str_rev == NULL) {
		print_error("Error with malloc (my_revstr)\n");
		return (NULL);
	}
	while (i < my_strlen(str)) {
		str_rev[i] = str[j];
		i++;
		j--;
	}
	str_rev[i] = '\0';
	return (str_rev);
}
