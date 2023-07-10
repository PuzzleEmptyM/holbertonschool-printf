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
	int i, i2, cprinted;
	char tempc;
	true_types stuff[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", NULL},
		{NULL, NULL},
	};

	i = 0, i2 = 0, cprinted = 0;
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
			while (i2 < 5)
			{
				if (tempc == *stuff[i2].found)
				{
					cprinted = cprinted + stuff[i2].doThis(list);
					i2 = 15;
				}
				else
					i2++;
			}
			cprinted = cprinted + print_char2(format[i - 1]);
			if (i2 == 15)
				i--;
		}
		else
			cprinted = cprinted + print_char2(format[i]);
		i++;
		i2 = 0;
	}
	va_end(list);
	return (cprinted);
}
