/*
** EPITECH PROJECT, 2017
** tests_printf.c
** File description:
** Unit tests for printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void);

Test(printf, simple_string, .init = redirect_all_std)
{
	char* str;

	str = "Hey comment ca va";
	my_printf(str);
	cr_assert_stdout_eq_str(str);
}

Test(printf, s_flag, .init = redirect_all_std)
{
	my_printf("Hey %s", "comment ca va");
	my_printf("Hey %s%s", "comment", " ca va");
	cr_assert_stdout_eq_str("Hey comment ca vaHey comment ca va");
}

Test(printf, nbr_int, .init = redirect_all_std)
{
	my_printf("%d %i", 36, 41);
	cr_assert_stdout_eq_str("36 41");
}

Test(printf, number_flags, .init = redirect_all_std)
{
	my_printf("%d %b %o %O %x %X", 35, 35, 35, 35, 351, 351);
	cr_assert_stdout_eq_str("35 100011 43 43 15f 15F");
}
