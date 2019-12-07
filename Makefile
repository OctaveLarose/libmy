SRC	=	src/my_compute_power_rec.c \
		src/my_showstr.c \
		src/my_strlen.c \
		src/my_compute_square_root.c \
		src/my_sort_int_array.c \
		src/my_strlowcase.c \
		src/my_find_prime_sup.c \
		src/my_strcapitalize.c \
		src/my_strncat.c \
		src/my_getnbr.c \
		src/my_strcat.c \
		src/my_strncmp.c \
		src/my_isneg.c \
		src/my_strcmp.c \
		src/my_strncpy.c \
		src/my_is_prime.c \
		src/my_strcpy.c \
		src/my_strstr.c \
		src/my_putchar.c \
		src/my_str_isalpha.c \
		src/my_str_to_word_array.c \
		src/my_put_nbr.c \
		src/my_str_islower.c \
		src/my_strupcase.c \
		src/my_putstr.c \
		src/my_str_isnum.c \
		src/my_swap.c \
		src/my_revstr.c \
		src/my_str_isprintable.c \
		src/my_str_isupper.c \
		src/my_printf.c \
		src/my_putnbr_base.c \
		src/my_int_to_str.c \
		src/get_cleanstr.c \
		src/my_str_to_word_array_sep.c \
		src/print_error.c \
		src/free_str_array.c \
		src/my_strdup.c \
		src/my_strndup.c \
		src/my_atof.c

SRC_UT	=	tests/tests_my_compute.c \
		tests/tests_my_str_is.c \
		tests/tests_my_strcatcmpcpy.c \
		tests/tests_my_strlen.c \
		tests/tests_my_strcapuplow.c \
		tests/tests_my_swap.c \
		tests/tests_my_putx.c \
		tests/tests_my_getnbrnegprimesup.c \
		tests/tests_my_xstr.c \
		tests/tests_my_sort_int_to_word_array.c \
		tests/tests_my_putnbr_base.c \
		tests/tests_printf.c \
		tests/tests_my_int_to_str.c \
		tests/tests_get_cleanstr.c \
		tests/tests_my_str_to_word_array_sep.c \
		tests/tests_my_str_n_dup.c \
		tests/tests_my_atof.c

CC	=	gcc

INC	=	-I include

CFLAGS	=	-W -Wall -Wextra -pedantic -Wno-int-convesion $(INC)

LDFLAGS	=	-lcriterion -lgcov

OBJ     =       $(SRC:.c=.o) $(SRC_UT:.c=.o)

NAME    =       libmy.a

UT_NAME	=		unit_tests

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc -f $(NAME) $(OBJ)

clean:
		$(RM) -f $(OBJ)

fclean:		clean
		$(RM) -f $(NAME)
		$(RM) -f ./**/*.gcda
		$(RM) -f ./**/*.gcno

tests_run: CFLAGS += --coverage
tests_run:	re
		$(CC) -o $(UT_NAME) $(OBJ) $(LDFLAGS)
		./$(UT_NAME)

re:		fclean all
