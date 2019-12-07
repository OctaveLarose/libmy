/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while (i < n) {
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
