/*
** EPITECH PROJECT, 2017
** tests_my_strcatcmpcpy.c
** File description:
** Unit tests for my_str(n)cat, my_str(n)cmp and my_str(n)cpy
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strcat, basic)
{
	char str[10] = "saucisson";
	char str2[5] = " sec";
	char str3[13] = "Hey comment ";
	char str4[6] = "ca va";

	cr_assert_str_eq(my_strcat(str, str2), "saucisson sec");
	cr_assert_str_eq(my_strcat(str3, str4), "Hey comment ca va");
}

Test(my_strncat, basic)
{
	char str[15] = "saucisson";
	char str2[5] = " sec";
	char str3[19] = "Hey comment ";
	char str4[6] = "ca va";

	cr_assert_str_eq(my_strncat(str, str2, 3), "saucisson se");
	cr_assert_str_eq(my_strncat(str3, str4, 0), "Hey comment ");
}

Test(my_strcmp, basic)
{
	cr_assert_eq(my_strcmp("saucisse", "SAUCISSE"), 1);
	cr_assert_eq(my_strcmp("SAUCISSE", "saucisse"), -1);
	cr_assert_eq(my_strcmp("saucisse", "saucisse"), 0);
}

Test(my_strncmp, basic)
{
	cr_assert_eq(my_strncmp("sAUCISSE", "SAUCISSE", 1), 1);
	cr_assert_eq(my_strncmp("SAUCIsse", "sauciSSE", 5), -1);
	cr_assert_eq(my_strncmp("saucisse", "sauCISSE", 3), 0);
}

Test(my_strcpy, basic)
{
	char str[50];
	char str2[50];

	my_strcpy(str, "Qu'est-ce que t'as dit sur ma mere, batard?");
	cr_assert_str_eq(str, "Qu'est-ce que t'as dit sur ma mere, batard?");
	my_strcpy(str2, str);
	cr_assert_str_eq(str2, "Qu'est-ce que t'as dit sur ma mere, batard?");
}

Test(my_strncpy, basic)
{
	char str[50];
	char str2[50];

	my_strncpy(str, "Qu'est-ce que t'as dit sur ma mere, batard?", 20);
	cr_assert_str_eq(str, "Qu'est-ce que t'as d");
	my_strncpy(str2, str, 15);
	cr_assert_str_eq(str2, "Qu'est-ce que t");
}
