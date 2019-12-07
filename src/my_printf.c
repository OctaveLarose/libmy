/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>

void convert_to_octal(int av)
{
	if (av < 0)
		av = av + 256;
	my_putchar(92);
	if (av < 8)
		my_putstr("00");
	if (av > 7 && av <= 63)
		my_putchar('0');
	my_putnbr_base(av, "01234567");
}

int if_s_maj(char *av)
{
	int i = 0;

	while (i < my_strlen(av)) {
		if (av[i] > 32 && av[i] <= 126)
			my_putchar(av[i]);
		else
			convert_to_octal(av[i]);
		i++;
	}
	return (0);
}

int handle_mod(char *str, int i, long av)
{
	if ((str[i] == 'h' || str[i] == 'l') && str[i + 1] == 'd') {
		my_put_nbr(av);
		return (i + 2);
	}
	if (str[i] == 'd' || str[i] == 'i' || str[i] == 'u')
		my_put_nbr(av);
	if (str[i] == 'c')
		my_putchar(av);
	if (str[i] == 'b')
		my_putnbr_base(av, "01");
	if (str[i] == 'x' || str[i] == 'p') {
		if (str[i] == 'p')
			my_putstr("0x");
		my_putnbr_base(av, "0123456789abcdef");
	}
	if (str[i] == 'X')
		my_putnbr_base(av, "0123456789ABCDEF");
	if (str[i] == 'o' || str[i] == 'O')
		my_putnbr_base(av, "01234567");
	return (i + 1);
}

int handle_mod_n(char *str, int i, char* av)
{
	if (str[i] == 'S')
		if_s_maj(av);
	if (str[i] == 's')
		my_putstr(av);
	if (str[i] == '%')
		my_putchar('%');
	return (i + 1);
}

int my_printf(char *s, ...)
{
	va_list av;
	int i = 0;

	va_start(av, s);
	while (i < my_strlen(s)) {
		if (s[i] == '%' && s[i + 1] == '%') {
			my_putchar('%');
			i = i + 2;
		}
		if (s[i] == '%' && s[i + 1] != 's' && s[i + 1] != 'S')
			i = handle_mod(s, i + 1, va_arg(av, long));
		else if (s[i] == '%') {
			i = handle_mod_n(s, i + 1, va_arg(av, char*));
		} else {
			my_putchar(s[i]);
			i++;
		}
	}
	va_end(av);
	return (0);
}
