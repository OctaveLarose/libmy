/*
** EPITECH PROJECT, 2017
** tests_my_putx
** File description:
** Unit tests for my_putstr and my_put_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_putstr, basic, .init = redirect_all_std)
{
	char *str = "Hey8Comment\\ca{v;a";

	my_putstr(str);
	cr_assert_stdout_eq_str(str);
}

Test(my_put_nbr, basic, .init = redirect_all_std)
{
	int nbr = 136829;

	my_put_nbr(nbr);
	cr_assert_stdout_eq_str("136829");
}

Test(my_put_nbr, negative, .init = redirect_all_std)
{
	int nbr = -610293;

	my_put_nbr(nbr);
	cr_assert_stdout_eq_str("-610293");
}
