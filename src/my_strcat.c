/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** Concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = 0;
	int dest_size = my_strlen(dest);
	int src_size = my_strlen(src);
	char *full_str = malloc(dest_size + src_size + 1);

	if (full_str == NULL) {
		print_error("Error with malloc (my_strcat)\n");
		return (NULL);
	}
	while (dest[i] != '\0') {
		full_str[i] = dest[i];
		i++;
	}
	while (src[j] != '\0') {
		full_str[i] = src[j];
		i++;
		j++;
	}
	full_str[i] = '\0';
	return (full_str);
}
