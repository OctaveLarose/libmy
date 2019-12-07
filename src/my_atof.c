/*
** EPITECH PROJECT, 2018
** my_atof.c
** File description:
** my_atof
*/

#include "my.h"

int is_float(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);
	if (str[0] == '-')
		i++;
	while (str[i] != 0) {
		if (str[i] != '.' && (str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

double dec_part(char *str, int dot_pos)
{
	double dec = 0;
	char *dec_str = NULL;
	int dec_len = 0;

	for (int i = dot_pos; str[i] != 0; i++)
		dec_len++;
	dec_str = malloc(dec_len + 1);
	if (dec_str == NULL) {
		print_error("Malloc in my_atof\n");
		return (0);
	}
	for (int i = 0; i < dec_len; i++)
		dec_str[i] = str[i + dot_pos + 1];
	dec_str[dec_len] = '\0';
	dec = (double)my_getnbr(dec_str);
	for (int i = 0; i < dec_len; i++)
		dec /= 10;
	return (dec);
}

double my_atof(char *str)
{
	char *ent_str = NULL;
	double res = 0;
	int dot_pos = 0;

	if (str == NULL || is_float(str) != 1)
		return (0);
	for (int i = 0; str[i] != 0 && str[i] != '.'; i++)
		dot_pos++;
	if (dot_pos == my_strlen(str))
		return ((double)my_getnbr(str));
	else {
		ent_str = my_strndup(str, dot_pos);
		if (ent_str == NULL)
			return (0);
		res = (double)my_getnbr(ent_str);
		free(ent_str);
	}
	return (res + dec_part(str, dot_pos));
}
