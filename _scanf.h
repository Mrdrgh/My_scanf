#ifndef SCANF_H
#define SCANF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct functs_struct - a struct containing the matched specifier for the
 * right
 * functions
 * @spec: the specifier char
 * @funct: the function for that specifier
*/
typedef struct functs_struct
{
	char *spec;
	int (*funct)();
} functs_struct;

/* string functions 1*/
int _putchar(char c);
int _puts(char *str);
int _strlen(char *str);
int _strcmp(char *, char *);
/* functions pointers*/
int (*get_function(const char *, functs_struct *))();

/* assigning functions_1 */
int assign_int(va_list );
int assign_float(va_list );
int assign_char(va_list );
int assign_str(va_list );
/* errors */
int _perror(char *err);
/* main */
int _scanf(const char *format, ...);

#endif