/*
** EPITECH PROJECT, 2017
** tests_my_int_to_str.c
** File description:
** Unit tests for my_int_to_str
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_int_to_str, basic)
{
	int nbr = 3471;
	char *str;
	int nbr2 = 3;
	char *str2;
	int nbr3 = 0;
	char *str3;

	str = my_int_to_str(nbr);
	str2 = my_int_to_str(nbr2);
	str3 = my_int_to_str(nbr3);
	cr_assert_str_eq(str, "3471");
	cr_assert_str_eq(str2, "3");
	cr_assert_str_eq(str3, "0");
}
