/*
** EPITECH PROJECT, 2018
** print_error.c
** File description:
** Prints an error on the error output
*/

#include "my.h"

void print_error(char *str)
{
	for (int i = 0; str[i] != 0; i++)
		write(2, &(str[i]), 1);
}
