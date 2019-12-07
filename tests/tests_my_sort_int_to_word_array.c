/*
** EPITECH PROJECT, 2017
** tests_my_sort_int_to_word_array.c
** File description:
** Unit tests for my_str_to_word_array and my_sort_int_array
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_sort_int_array, basic)
{
	int array[12] = {13, 2, -5, 8, 0, 7, 1271, -120, 431, 54, -36};
	int size = 11;
	int sorted_array[12] = {-120, -36, -5, 0, 2, 7, 8, 13, 54, 431, 1271};

	my_sort_int_array(array, size);
	cr_assert_arr_eq(array, sorted_array, size * sizeof(int));
}

Test(my_str_to_word_array, basic)
{
	char *str = "Hey comment/ca.va";
	char **sentence;

	sentence = my_str_to_word_array(str);
	cr_assert_str_eq(sentence[0], "Hey");
	cr_assert_str_eq(sentence[1], "comment");
	cr_assert_str_eq(sentence[2], "ca");
	cr_assert_str_eq(sentence[3], "va");
	for (int i = 0 ; i < 4 ; i++)
		free(sentence[i]);
	free(sentence);
}

Test(my_str_to_word_array2, basic)
{
	char *str = "Qu'est-ce+que tu&viens.de/me DIRE batard?";
	char **sentence;

	sentence = my_str_to_word_array(str);
	cr_assert_str_eq(sentence[0], "Qu");
	cr_assert_str_eq(sentence[1], "est");
	cr_assert_str_eq(sentence[2], "ce");
	cr_assert_str_eq(sentence[3], "que");
	cr_assert_str_eq(sentence[4], "tu");
	cr_assert_str_eq(sentence[5], "viens");
	cr_assert_str_eq(sentence[6], "de");
	cr_assert_str_eq(sentence[7], "me");
	cr_assert_str_eq(sentence[8], "DIRE");
	cr_assert_str_eq(sentence[9], "batard");
	for (int i = 0 ; i < 11 ; i++)
		free(sentence[i]);
	free(sentence);
}
