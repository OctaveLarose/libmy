/*
** EPITECH PROJECT, 2017
** tests_my_swap.c
** File description:
** Unit tests for my_swap
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_swap, basic)
{
	int a = 32;
	int b = 14;
	int c = 189;
	int d = -3;

	my_swap(&a, &b);
	my_swap(&c, &d);
	cr_assert_eq(a, 14);
	cr_assert_eq(b, 32);
	cr_assert_eq(c, -3);
	cr_assert_eq(d, 189);
}
