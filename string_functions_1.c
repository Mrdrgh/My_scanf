#include "_scanf.h"

/**
 * _putchar - a simple implementation of putchar
 * @c: the char
 * Return: 1 on success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - using _putchar we will put out a string
 * @str: the string to put out
 * Return: the number of chars printed
*/
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _strlen - the len of str
 * @str: the str to have the len of
 * Return: the len of str
*/

int _strlen(char *str)
{
	int i = 0;


	for (; str[i]; i++);

	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the difference if there was one
*/
int _strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
	{
		return (0);
	}
	while (*s1++ && *s2++)
		if (*s1 != *s2)
			return (*s1 - *s2);
}