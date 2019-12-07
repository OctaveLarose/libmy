/*
** EPITECH PROJECT, 2018
** my_str_to_word_array_st.c
** File description:
** Splits a string into words. Separators : non alphanumeric characters.
*/

#include "my.h"

int alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char *get_word(char *full_str)
{
	char *word;
	int w_len = 0;
	int i = 0;

	while ((full_str[w_len] != 0) && (alphanum(full_str[w_len]) != 0))
		w_len++;
	word = malloc(sizeof(char) * w_len + 1);
	if (word == NULL) {
		my_printf("Error in my_str_to_word_array (word)\n");
		return (NULL);
	}
	while ((full_str[i] != 0) && (alphanum(full_str[i]) != 0)) {
		word[i] = full_str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **my_str_to_word_array(char *str)
{
	char **str_tab;
	int nbr_arg = 1;

	for (int i = 0; str[i] != 0; i++)
		if (alphanum(str[i]) != 1)
			nbr_arg++;
	str_tab = malloc(sizeof(char*) * (nbr_arg + 1));
	if (str_tab == NULL) {
		my_printf("Error in my_str_to_word_array (tab)\n");
		return (NULL);
	}
	for (int i = 0; i < nbr_arg; i++) {
		str_tab[i] = get_word(str);
		while ((str[0] != 0) && (alphanum(str[0]) != 0))
			str++;
		if (str != 0)
			str++;
	}
	str_tab[nbr_arg] = NULL;
	return (str_tab);
}
