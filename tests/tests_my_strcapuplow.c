/*
** EPITECH PROJECT, 2017
** my_str_capuplow.c
** File description:
** Unit tests for my_strcapitalize, my_strupcase, my_strlowcase
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strupcase, basic)
{
	char *str = malloc(sizeof(char) * 30);
	char *str2 = malloc(sizeof(char) * 30);

	my_strcpy(str, "hey comment ca va");
	my_strcpy(str2, "HeY COmMEnT CA vA");
	str = my_strupcase(str);
	str2 = my_strupcase(str2);
	cr_assert_str_eq(str, "HEY COMMENT CA VA");
	cr_assert_str_eq(str2, "HEY COMMENT CA VA");
	free(str);
	free(str2);
}

Test(my_strlowcase, basic)
{
	char *str = malloc(sizeof(char) * 30);
	char *str2 = malloc(sizeof(char) * 30);

	my_strcpy(str, "HEY COMMENT CA VA");
	my_strcpy(str2, "Hey COmMEnT cA Va");
	str = my_strlowcase(str);
	str2 = my_strlowcase(str2);
	cr_assert_str_eq(str, "hey comment ca va");
	cr_assert_str_eq(str2, "hey comment ca va");
	free(str);
	free(str2);
}

Test(my_strcapitalize, basic)
{
	char *str = malloc(sizeof(char) * 30);
	char *str2 = malloc(sizeof(char) * 30);

	my_strcpy(str2, "hey8comment/ca va");
	my_strcpy(str, "hey comment ca va");
	str = my_strcapitalize(str);
	str2 = my_strcapitalize(str2);
	cr_assert_str_eq(str, "Hey Comment Ca Va");
	cr_assert_str_eq(str2, "Hey8comment/Ca Va");
	free(str);
	free(str2);
}
