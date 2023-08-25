#include "_scanf.h"

/**
 * get_function - based on the specifier it encounters , get_function returns
 * a pointer to a function to do the right job
 * @str: the format char pointer
 * @S: the struct of functs
 * Return: the pointer to the right function, or NULL if no specifier found
*/

int (*get_function(const char *str, functs_struct *S))()
{
	int i = 0, j = 0;

	while (str[j])
	{
		if (str[j] != '\t' && str[j] != ' ')
		{
			i = 0;
			while (S[i].spec)
			{
				if (S[i].spec[0] == str[j])
					return (S[i].funct);
				i++;
			}
		}
		else
			j++;
	}
	return (NULL);
}