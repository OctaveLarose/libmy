/*
** EPITECH PROJECT, 2017
** my_str_n_dup.c
** File description:
** Unit tests for the my_strdup and my_strn_dup.c functions
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strdup, basic)
{
	char *str = NULL;
	char *str_a = "Hey comment ca va";
	char *str_b = "Saucisson sec";

	str = my_strdup(str_a);
	cr_assert_str_eq(str, str_a);
	free(str);
	str = my_strdup(str_b);
	cr_assert_str_eq(str, str_b);
	free(str);
}

Test(my_strndup, basic)
{
	char *str = NULL;
	char *str_a = "Hey comment ca va";
	char *str_b = "Saucisson sec";

	str = my_strndup(str_a, 5);
	cr_assert_str_eq(str, "Hey c");
	free(str);
	str = my_strndup(str_b, 3);
	cr_assert_str_eq(str, "Sau");
	free(str);
}
