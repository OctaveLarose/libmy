# libmy

C library rewriting basic libc functions, made during my first year at Epitech.

The code isn't the best, since it was made by a first year student, but I've grown attached to it after all the work 
I've had to put into it. This library was pretty much my introduction to real programming.

I've added a few custom functions to it that have proven useful over the numerous projects I wrote in C during my first 
year.

If you're an Epitech student who wants to steal this code, ~~congratulations on understanding how the industry works~~
 PLEASE try to understand the code before copying and pasting it.
 
 
# Function list

 my_compute_power_rec : Calculates nb^p. (TESTED)

 my_compute_square_root : Calculates nb's square root, when that square root is a whole number. (TESTED)

 my_getnbr : Returns a number sent as a string. (TESTED)

 my_isneg : Differentiate negative and positive numbers. (TESTED)

 my_is_prime : Checks if a number is prime or not. (TESTED)

 my_find_prime_sup : Returns the smallest prime number greater or equal to the number sent. (TESTED)

 my_putchar : Prints a character. (Not tested, but works)
 
 my_put_nbr : Prints a number. (TESTED)

 my_putstr : Prints a string. (TESTED)

 my_revstr : Reverses a string. (TESTED)

 my_showstr : Prints a string ; non-printable characters are printed in hexadecimal form.
 
 my_strstr : Finds a needle in a haystack. (TESTED)

 my_str_to_word_array : Splits a string into words. Returns a **char. (TESTED)

 my_sort_int_array : Sorts an integer array. Bubblesorting. (TESTED)

 my_showmem : Empty
 
 my_str_is_alpha : Returns 1 if the string is only composed of letters. (TESTED)

 my_str_is_lower : Returns 1 if the string is only composed of lowercase letters. (TESTED)

 my_str_is_num : Returns 1 if the string is only composed of numbers. (TESTED)

 my_str_is_printable : Returns 1 if the string is only composed of printable ASCII characters. (TESTED)

 my_str_isupper : Returns 1 if the string is only composed of uppercase letters. (TESTED)

 my_strlen : Returns the length of a string. (TESTED)

 my_strcapitalize : Capitalizes the first letter of each word in a string. (TESTED)

 my_strupcase : Makes every letter uppercase. (TESTED)

 my_strlowcase : Makes every letter lowercase. (TESTED)

 my_strcat : Concatenates two strings. (TESTED)

 my_strncat : Concatenates n characters of src to the end of dest. (TESTED)

 my_strcmp : Compares two strings. Returns -1, 0 or 1 depending on ASCII values. (TESTED)

 my_strncmp : Compares the first n characters of two strings. Same as my_strcmp. (TESTED)

 my_strcpy : Copies a string into another. (TESTED)

 my_strncpy : Copies n characters from a string into another. (TESTED)

 my_swap : Swaps the content of two integers. (TESTED)

 my_printf: Equivalent of printf. Uses write. (TESTED)

 my_int_to_str : Converts an int into a char*. (TESTED)

 get_cleanstr : Crops out extraneous spaces and tabs in a string. (TESTED)

 free_str_array : Frees an array of char*.
 
 print_error : my_putstr on stderr.
