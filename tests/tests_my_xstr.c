/*
** EPITECH PROJECT, 2017
** tests_my_xstr.c
** File description:
** Unit tests for my_revstr, my_strstr, my_showstr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void);

Test(my_revstr, basic)
{
	char *str = "Hey comment ca va";
	char *str2 = "12345";

	cr_assert_str_eq(my_revstr(str), "av ac tnemmoc yeH");
	cr_assert_str_eq(my_revstr(str2), "54321");
}

Test(my_strstr, basic)
{
	char *str = "Hey comment ca va";
	char *to_find = "com";
	char *str2 = "12121212121212";
	char *to_find2 = "12";

	cr_assert_str_eq(my_strstr(str, to_find), "comment ca va");
	cr_assert_str_eq(my_strstr(str2, to_find2), "121212121212");
}


Test(my_showstr, basic, .init = redirect_all_std)
{
	char *str = malloc(sizeof(char) * 30);

	my_strcpy(str, "Hey comment ca va");
	str[2] = 6;
	str[15] = 22;
	my_showstr(str);
	cr_assert_stdout_eq_str("He\\06 comment ca \\16a");
	free(str);
}
