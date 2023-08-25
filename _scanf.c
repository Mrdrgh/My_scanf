#include "_scanf.h"

/**
 * _scanf - the main entry to _scanf
 * @format: the number of args
 * Return: the number of input items succesfully assigned
*/
int _scanf(const char *format, ...)
{
	functs_struct S[] = {{"d", assign_int}, {"i", assign_int}, {"f", assign_float},
	{"c", assign_char}, {"s", assign_str}, {NULL, NULL}};
	int items_assigned = 0, (*function_pointer)(), chars_consumed;
	va_list var;

	va_start(var, format);
	if (!format || (*format == '%' && !*(format + 1)))
	{
		_perror("no format found\n");
		return (items_assigned);
	}
	while (*format && *(format + 1))
	{
		if (*format == ' ' || *format == '\t')
		{
			format++;
			continue;
		}
		if ((*format == '%') && !(function_pointer = get_function(format + 1, S, &chars_consumed)))
		{
			_perror("no matches for this specifier : ");
			_putchar(*(format + 1)); _putchar('\n');
			return (items_assigned);
		}
		items_assigned = function_pointer(var);
		format += chars_consumed + 2;
	}
	return (items_assigned);
}