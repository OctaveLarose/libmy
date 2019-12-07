/*
** EPITECH PROJECT, 2018
** gnl.h
** File description:
** header for gnl
*/

#ifndef GNL
#define GNL

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define READ_SIZE 100

char *get_next_line(int fd);
char *get_line(char *total);
void add_extra(char extra[], char *total);
int get_newline(char *buf);
char *my_malloc(int size);
char *realloc_total(char *total, char *buf, int nb_read);
void get_extra(char *total, char *extra);

#endif
