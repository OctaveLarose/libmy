/*
** EPITECH PROJECT, 2017
** tests_my_str_to_word_array_sep.c
** File description:
** Unit tests for my_str_to_word_array_sep
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_str_to_word_array_sep, basic)
{
	char *str = "Heyxcommentxca va";
	char **sentence = NULL;

	sentence = my_str_to_word_array_sep(str, " x");
	cr_assert_str_eq(sentence[0], "Hey");
	cr_assert_str_eq(sentence[1], "comment");
	cr_assert_str_eq(sentence[2], "ca");
	cr_assert_str_eq(sentence[3], "va");
	for (int i = 0 ; i < 4 ; i++)
		free(sentence[i]);
	free(sentence);
}

Test(my_str_to_word_array_sep2, basic)
{
	char *str = "Qu'est-ce+que tu&viens.de/me DIRE batard?";
	char **sentence = NULL;

	sentence = my_str_to_word_array_sep(str, "+-&./");
	cr_assert_str_eq(sentence[0], "Qu'est");
	cr_assert_str_eq(sentence[1], "ce");
	cr_assert_str_eq(sentence[2], "que tu");
	cr_assert_str_eq(sentence[3], "viens");
	cr_assert_str_eq(sentence[4], "de");
	cr_assert_str_eq(sentence[5], "me DIRE batard?");
	for (int i = 0 ; i < 6 ; i++)
		free(sentence[i]);
	free(sentence);
}
