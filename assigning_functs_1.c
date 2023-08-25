#include "_scanf.h"

/**
 * assign_int - assigns int
 * @var: the list of args
 * Return: 1 on success , 0 on failiure
*/

int assign_int(va_list var)
{
	int *nbr = va_arg(var, int *), temp;
	ssize_t chars_nbr = 0;
	char *line_buffer = NULL;
	size_t n = 0;
	chars_nbr = getline(&line_buffer, &n, stdin);
	line_buffer[strcspn(line_buffer, "\n")] = '\0';

	temp = atoi(line_buffer);
	free(line_buffer);
	if (temp)
	{
		*nbr = temp;
		return (1);
	}
	else
	{
		_perror("error : no int to convert\n");
		return (0);
	}
}

/**
 * assign_float - assigns float numbers
 * @var: the variable list
 * Return: on success 1 , on failiure 0
*/
int assign_float(va_list var)
{
	float *f = va_arg(var, float *), temp;
	ssize_t chars_nbr = 0;
	char *line_buffer = NULL;
	size_t n = 0;
	chars_nbr = getline(&line_buffer, &n, stdin);
	line_buffer[strcspn(line_buffer, "\n")] = '\0';

	temp = atof(line_buffer);
	free(line_buffer);
	if (temp)
	{
		*f = temp;
		return (1);
	}
	else
	{
		_perror("error : no int to convert\n");
		return (0);
	}
}

/**
 * assign-char - assigns char , this is close to assign int
 * @var: the var list
 * Return: 1 on success 0 on failiure
*/
int assign_char(va_list var)
{
	int *c = va_arg(var, int *), temp;
	if ((temp = getchar()) == -1)
	{
		_perror("getchar error\n");
		return (0);
	}
	*c = temp;
	return (1);
}

