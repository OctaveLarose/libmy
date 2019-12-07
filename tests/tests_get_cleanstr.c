/*
** EPITECH PROJECT, 2017
** tests_my_strlen.c
** File description:
** Unit tests for my_strlen
*/

#include <criterion/criterion.h>
#include "my.h"

Test(get_cleanstr, basic)
{
	char *cl_str = get_cleanstr("Hey   comment      ca      va?x");
	char *cl_str2 = get_cleanstr("     \t\t   \t");
	char *cl_str3 = get_cleanstr("     abcdef\tghijkl mnop      qr");

	cr_assert_str_eq(cl_str, "Hey comment ca va?x");
	cr_assert_str_eq(cl_str2, "");
	cr_assert_str_eq(cl_str3, "abcdef\tghijkl mnop qr");
}
