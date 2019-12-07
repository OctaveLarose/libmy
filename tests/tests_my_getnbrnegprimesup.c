/*
** EPITECH PROJECT, 2017
** tests_my_getnbrnegprimesup.c
** File description:
** Unit tests for my_getnbr, my_isneg, my_is_prime, my_find_prime_sup
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_getnbr, basic)
{
	char *str = "43671";
	char *str2 = "-1890";

	cr_assert_eq(my_getnbr(str), 43671);
	cr_assert_eq(my_getnbr(str2), -1890);
}

Test(my_isneg, basic)
{
	int nbr = 156;
	int nbr2 = -12;
	int nbr3 = 0;

	cr_assert_eq(my_isneg(nbr), 0);
	cr_assert_eq(my_isneg(nbr2), 1);
	cr_assert_eq(my_isneg(nbr3), 0);
}

Test(my_is_prime, basic)
{
	int nbr = 13;
	int nbr2 = 16;
	int nbr3 = 2;
	int nbr4 = 1302397;

	cr_assert_eq(my_is_prime(nbr), 1);
	cr_assert_eq(my_is_prime(nbr2), 0);
	cr_assert_eq(my_is_prime(nbr3), 1);
	cr_assert_eq(my_is_prime(nbr4), 1);
}

Test(my_find_prime_sup, basic)
{
	int nbr = -15;
	int nbr2 = 8;
	int nbr3 = 98;
	int nbr4 = 1302392;

	cr_assert_eq(my_find_prime_sup(nbr), 2);
	cr_assert_eq(my_find_prime_sup(nbr2), 11);
	cr_assert_eq(my_find_prime_sup(nbr3), 101);
	cr_assert_eq(my_find_prime_sup(nbr4), 1302397);
}
