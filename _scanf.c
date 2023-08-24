#include "_scanf.h"

/**
 * _scanf - the main entry to _scanf
 * @format: the number of args
 * Return: the number of input items succesfully assigned
*/
int _scanf(const char *format, ...)
{
	va_list var;

	va_start(var, format);

	if (!format || (*format == '%' && !*(format + 1)))
	{
		
	}
	return (0);
}