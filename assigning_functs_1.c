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