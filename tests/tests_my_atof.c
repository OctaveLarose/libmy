/*
** EPITECH PROJECT, 2018
** tests_my_atof.c
** File description:
** Unit tests for my_atof
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_atof, basic)
{
	char *str = "3.121";
	char *str2 = "18.9102";
	char *str3 = "-5.4";

	cr_assert_float_eq(3.121, my_atof(str), 3);
	cr_assert_float_eq(18.9102, my_atof(str2), 4);
	cr_assert_float_eq(-5.4, my_atof(str3), 1);
}

Test(my_atof_error, basic)
{
	char *str = "3.1a21";
	char *str2 = "X.9102";

	cr_assert_float_eq(0, my_atof(str), 1);
	cr_assert_float_eq(0, my_atof(str2), 1);
}
