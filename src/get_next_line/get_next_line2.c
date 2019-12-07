/*
** EPITECH PROJECT, 2018
** get_next_line2.c
** File description:
** Other functions needed by get_next_line
*/

#include "gnl.h"

int get_newline(char *buf)
{
	for (int i = 0; buf[i] != 0; i++)
		if (buf[i] == '\n')
			return (i);
	return (-1);
}

void get_extra(char *extra, char *total)
{
	int i = 0;
	int j = 0;

	while ((total[i] != 0) && (total[i] != '\n'))
		i++;
	i++;
	for (int i = 0; i < READ_SIZE + 1; i++)
		extra[i] = '\0';
	while (i < my_strlen(total)) {
		extra[j] = total[i];
		i++;
		j++;
	}
}

char *get_line(char *total)
{
	char *line = my_malloc(my_strlen(total) + 1);
	int i = 0;

	if (line == NULL)
		return (NULL);
	if (total[0] == '\0') {
		free(line);
		return (NULL);
	}
	while (total[i] != '\n' && total[i] != '\0') {
		line[i] = total[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char *realloc_total(char *total, char *buf, int nb_read)
{
	char *new_total = NULL;

	if (nb_read < 1)
		return (total);
	new_total = my_malloc(my_strlen(total) + nb_read + 1);
	if (new_total == NULL)
		return (NULL);
	new_total = my_strncat(new_total, total, my_strlen(total));
	new_total = my_strncat(new_total, buf, nb_read);
	if (total != NULL)
		free(total);
	return (new_total);
}

char *my_malloc(int size)
{
	char *str = malloc(size);

	if (str == NULL) {
		print_error("Error with malloc in get_next_line(my_malloc)\n");
		return (NULL);
	}
	for (int i = 0; i < size; i++)
		str[i] = '\0';
	return (str);
}
