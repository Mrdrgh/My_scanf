#include "_scanf.h"

/**
 * _scanf - the main entry to _scanf
 * @format: the number of args
 * Return: the number of input items succesfully assigned
*/
int _scanf(const char *format, ...)
{
	functs_struct S[] = {{"d", assign_int}, {"i", assign_int}, {NULL, NULL}};
	int items_assigned = 0, (*function_pointer)();
	va_list var;

	va_start(var, format);
	if (!format || (*format == '%' && !*(format + 1)) || *format != '%')
	{
		_perror("no format found");
		return (items_assigned);
	}
	while (*format && *(format + 1))
	{
		if (*format == '%' && !(function_pointer = get_function(format + 1, S)))
		{
			_perror("no matches for this specifier : ");
			_putchar(*(format + 1)); _putchar('\n');
			return (items_assigned);
		}
		items_assigned = function_pointer(var);
		format += 2;
	}
	return (items_assigned);
}