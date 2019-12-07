/*
** EPITECH PROJECT, 2017
** tests_my_strlen.c
** File description:
** Unit tests for my_strlen
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strlen, basic)
{
	cr_assert_eq(my_strlen("Saucisse"), 8);
	cr_assert_eq(my_strlen("a"), 1);
	cr_assert_eq(my_strlen(""), 0);
	cr_assert_eq(my_strlen("Hey comment ca va"), 17);
	cr_assert_eq(my_strlen("3761"), 4);
}
