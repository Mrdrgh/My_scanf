#include "_scanf.h"

/**
 * get_function - based on the specifier it encounters , get_function returns
 * a pointer to a function to do the right job
 * @str: the format char pointer
 * @S: the struct of functs
 * Return: the pointer to the right function, or NULL if no specifier found
*/

int (*get_function(const char *str, functs_struct *S, int *chars_consumed))()
{
	int i = 0;
	
	*chars_consumed = 0;
	while (str[*chars_consumed])
	{
		if (str[*chars_consumed] != '\t' && str[*chars_consumed] != ' ')
		{
			i = 0;
			while (S[i].spec)
			{
				if (S[i].spec[0] == str[*chars_consumed])
					return (S[i].funct);
				i++;
			}
		}
		else
			(*chars_consumed)++;;
	}
	return (NULL);
}