/*
** EPITECH PROJECT, 2018
** get_cleanstr.c
** File description:
** Cleans an str by removing extra spaces and tabs
*/

#include "my.h"

int stab(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	return (0);
}

char *get_cleanstr(char *str)
{
	char *clean_str = malloc(my_strlen(str) + 1);
	int i = 0;
	int j = 0;

	if (clean_str == NULL)
		return (NULL);
	while (stab(str[0]) == 1)
		str++;
	while (str[i + 1] != 0) {
		if ((stab(str[i]) != 1) || (stab(str[i + 1]) != 1)) {
			clean_str[j] = str[i];
			j++;
		}
		i++;
	}
	if (stab(str[i]) != 1) {
		clean_str[j] = str[i];
		j++;
	}
	clean_str[j] = '\0';
	return (clean_str);
}
