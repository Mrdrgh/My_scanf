#include "_scanf.h"

/**
 * _perror - puts out an error to stderr
 * @err: the error output
 * Return: 1 on success
*/
int _perror(char *err)
{
	int len = 0;
	size_t wirte_nbr = 0;

	len = _strlen(err);
	wirte_nbr = write(STDERR_FILENO, err, len);
	(void) wirte_nbr;
	return (1);
}