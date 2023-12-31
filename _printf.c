#include "main.h"

/**
 * _printf - Function that prints values given with a seperator
 * @format: the value to be printed
 *
 * Return: Returns the number of characters printed or -1
 */

int _printf(const char * const format, ...)
{
	va_list list;
	int i, cprinted;
	char tempc;

	i = 0, cprinted = 0;
	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format && format[i])
	{
		tempc = format[i];
		if (tempc == '%')
		{
			i++;
			tempc = format[i];
			if (tempc == '\0')
				return (-1);
			cprinted = cprinted + Format(tempc, list);
		}
		else
			cprinted = cprinted + print_char2(format[i]);
		i++;
	}
	va_end(list);
	return (cprinted);
}
