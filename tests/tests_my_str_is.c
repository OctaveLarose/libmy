/*
** EPITECH PROJECT, 2017
** my_str_is.c
** File description:
** Unit tests for the my_str_is... functions
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_str_isalpha, basic)
{
	cr_assert_eq(my_str_isalpha("saucisse"), 1);
	cr_assert_eq(my_str_isalpha("saucis2se"), 0);
	cr_assert_eq(my_str_isalpha("Hey ca va?"), 0);
	cr_assert_eq(my_str_isalpha("SAUCISSE"), 1);
	cr_assert_eq(my_str_isalpha("DEMI SAUCISSE"), 0);
}

Test(my_str_islower, basic)
{
	cr_assert_eq(my_str_islower("saucisse"), 1);
	cr_assert_eq(my_str_islower("Saucisse"), 0);
	cr_assert_eq(my_str_islower("sauciss0192012102"), 0);
	cr_assert_eq(my_str_islower("hey saucisse"), 0);
	cr_assert_eq(my_str_islower(" saucisse"), 0);
}

Test(my_str_isnum, basic)
{
	cr_assert_eq(my_str_isnum("16283"), 1);
	cr_assert_eq(my_str_isnum("16 283"), 0);
	cr_assert_eq(my_str_isnum("saucisse"), 0);
	cr_assert_eq(my_str_isnum("0000000"), 1);
	cr_assert_eq(my_str_isnum("162a83"), 0);
}

Test(my_str_isprintable, basic)
{
	char *str = malloc(sizeof(char) * 3);

	str[0] = 'a';
	str[1] = 6;
	str[2] = 'b';

	cr_assert_eq(my_str_isprintable("saucisse"), 1);
	cr_assert_eq(my_str_isprintable("Hey comment ca va"), 1);
	cr_assert_eq(my_str_isprintable(str), 0);
}

Test(my_str_isupper, basic)
{
	cr_assert_eq(my_str_isupper("SAUCISSE"), 1);
	cr_assert_eq(my_str_isupper("saucisse"), 0);
	cr_assert_eq(my_str_isupper("SAUCISSe"), 0);
	cr_assert_eq(my_str_isupper("SAUCISS3"), 0);
	cr_assert_eq(my_str_isupper("DEMI SAUCISSE"), 0);
}
