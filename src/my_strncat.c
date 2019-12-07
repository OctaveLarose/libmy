/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** Concatenates n characters of src to the end of dest
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int dest_size = my_strlen(dest);

	if (src == NULL)
		return (dest);
	while (i < nb) {
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
