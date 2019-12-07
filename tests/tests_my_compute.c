/*
** EPITECH PROJECT, 2017
** tests_my_compute.c
** File description:
** my_compute_power_rec and my_compute_square_root
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_compute_power_rec, basic)
{
	cr_assert_eq(my_compute_power_rec(2451, 0), 1);
	cr_assert_eq(my_compute_power_rec(67, 1), 67);
	cr_assert_eq(my_compute_power_rec(2, 4), 16);
	cr_assert_eq(my_compute_power_rec(13, 2), 169);
	cr_assert_eq(my_compute_power_rec(3, 5), 243);
}

Test(my_compute_square_root, basic)
{
	cr_assert_eq(my_compute_square_root(31), 0);
	cr_assert_eq(my_compute_square_root(16), 4);
	cr_assert_eq(my_compute_square_root(1), 1);
	cr_assert_eq(my_compute_square_root(144), 12);
	cr_assert_eq(my_compute_square_root(145), 0);
}
