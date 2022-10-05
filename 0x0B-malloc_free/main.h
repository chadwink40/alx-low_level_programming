#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char **strtow(char *str);
int _putchar(char c);
int string_len(char *str);
char *truncate_extra_spaces(char *str1, char *str);
char **mem_alloc(char *str1);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
#endif
