/*
** EPITECH PROJECT, 2017
** strstr
** File description:
** Finds a needle in a haystack
*/

#include "my.h"

void my_strstr_n(int *s, int *k, int i)
{
	if (*s == 0) {
		*k = i;
		*s = 1;
	}
}

char *my_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	int k;
	int s = 0;
	char *ret = 0;

	while (str[i++] != '\0' && to_find[j] != '\0') {
		if (str[i] == to_find[j++])
			my_strstr_n(&s, &k, i);
		else
			j = 0;
	}
	if (to_find[j] == '\0')
		ret = &str[k];
	return (ret);
}
