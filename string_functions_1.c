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
 * _strlen - 
*/