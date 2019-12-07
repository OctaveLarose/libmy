/*
** EPITECH PROJECT, 2018
** free_str_array
** File description:
** Frees an array of char*
*/

#include "my.h"

void free_str_array(char **str_array)
{
	for (int i = 0; str_array[i] != NULL; i++)
		free(str_array[i]);
	free(str_array);
}
