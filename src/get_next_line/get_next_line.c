/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** getline refait
*/

#include "gnl.h"

char *add_extra(char extra[], char *total)
{
	int i = 0;

	if (extra != NULL) {
		total = my_malloc(my_strlen(extra) + 1);
		while (extra[i] != 0) {
			total[i] = extra[i];
			i++;
		}
		total[i] = 0;
	}
	return (total);
}

char *return_line(char *total, int nb_read)
{
	char *line = NULL;

	line = get_line(total);
	if (nb_read < 1)
		return (line);
	free(total);
	return (line);
}

char* get_next_line(int fd)
{
	static char extra[READ_SIZE + 1];
	char *total = NULL;
	char *buf = NULL;
	int nb_read = READ_SIZE;

	if (nb_read < 1)
		return (NULL);
	total = add_extra(extra, total);
	do {
		buf = my_malloc(READ_SIZE + 1);
		if (buf == NULL) {
			free(total);
			return (NULL);
		}
		nb_read = read(fd, buf, READ_SIZE);
		total = realloc_total(total, buf, nb_read);
		free(buf);
	} while (get_newline(total) == -1 && nb_read == READ_SIZE);
	get_extra(extra, total);
	return (return_line(total, nb_read));
}
