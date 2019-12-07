/*
** EPITECH PROJECT, 2018
** my_str_to_word_array_sep.c
** File description:
** Splits a string into words. Separators : chosen by the user.
*/

#include "my.h"

int separ(char c, char *sep)
{
	for (int i = 0; sep[i] != 0; i++)
		if (c == sep[i])
			return (0);
	return (1);
}

char *get_word2(char *full_str, char *sep)
{
	char *word;
	int w_len = 0;
	int i = 0;

	while ((full_str[w_len] != 0) && (separ(full_str[w_len], sep) != 0))
		w_len++;
	word = malloc(sizeof(char) * w_len + 1);
	if (word == NULL) {
		my_printf("Error in my_str_to_word_array (word)\n");
		return (NULL);
	}
	while ((full_str[i] != 0) && (separ(full_str[i], sep) != 0)) {
		word[i] = full_str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **my_str_to_word_array_sep(char *str, char *sep)
{
	char **str_tab;
	int nbr_arg = 1;

	for (int i = 0; str[i] != 0; i++)
		if (separ(str[i], sep) != 1)
			nbr_arg++;
	str_tab = malloc(sizeof(char*) * (nbr_arg + 1));
	if (str_tab == NULL) {
		my_printf("Error in my_str_to_word_array (tab)\n");
		return (NULL);
	}
	for (int i = 0; i < nbr_arg; i++) {
		str_tab[i] = get_word2(str, sep);
		while ((str[0] != 0) && (separ(str[0], sep) != 0))
			str++;
		if (str != 0)
			str++;
	}
	str_tab[nbr_arg] = NULL;
	return (str_tab);
}
