/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Header for libmy.a
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "gnl.h"

void	my_putchar(char);
int	my_put_nbr(int);
void	my_swap(int*, int*);
int	my_putstr(char const*);
int	my_strlen(char const*);
int	my_getnbr(char const*);
int	my_isneg(int);
void	my_sort_int_array(int*, int);
int	my_compute_power_rec(int, int);
int	my_compute_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char*, char const*);
char	*my_strncpy(char*, char const *, int);
char	*my_revstr(char*);
char	*my_strstr(char*, char*);
char	**my_str_to_word_array(char*);
int	check_if_sorted(int*, int);
int	my_strcmp(char const*, char const*);
int	my_strncmp(char const*, char const*, int);
char	*my_strupcase(char*);
char	*my_strlowcase(char*);
char	*my_strcapitalize(char*);
int	my_str_isalpha(char const*);
int	my_str_isnum(char const*);
int	my_str_islower(char const*);
int	my_str_isupper(char const*);
int	my_str_isprintable(char const*);
int	my_showstr(char const*);
char	*my_strcat(char*, char const*);
char	*my_strncat(char*, char const*, int);
int	my_printf(char*, ...);
int	my_putnbr_base(long, char*);
char	*my_int_to_str(int);
char	*get_cleanstr(char*);
char	**my_str_to_word_array_sep(char*, char*);
void	free_str_array(char**);
void	print_error(char*);
char	*my_strdup(char*);
char	*my_strndup(char*, int n);
double	my_atof(char*);

#endif
