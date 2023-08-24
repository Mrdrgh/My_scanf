#ifndef SCANF_H
#define SCANF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>


/* string functions 1*/
int _putchar(char c);
int _puts(char *str);

/* errors */
int _perror(const char *err);
/* main */
int _scanf(const char *format, ...);

#endif