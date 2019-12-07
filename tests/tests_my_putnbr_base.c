/*
** EPITECH PROJECT, 2017
** tests_my_putnbr_base.c
** File description:
** Unit tests for my_putnbr_base
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void);

Test(my_putnbr_base, decimal, .init = redirect_all_std)
{
	my_putnbr_base(312, "0123456789");
	cr_assert_stdout_eq_str("312");
}

Test(my_putnbr_base, binary, .init = redirect_all_std)
{
	my_putnbr_base(312, "01");
	cr_assert_stdout_eq_str("100111000");
}

Test(my_putnbr_base, hexad, .init = redirect_all_std)
{
	my_putnbr_base(312, "0123456789ABCDEF");
	cr_assert_stdout_eq_str("138");
}

Test(my_putnbr_base, custom, .init = redirect_all_std)
{
	my_putnbr_base(312, "sauce");
	cr_assert_stdout_eq_str("uuuu");
}
