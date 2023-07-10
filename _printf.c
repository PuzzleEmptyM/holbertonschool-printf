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
	int i;
	int i2;
	int *ipass;
	int cprinted;
	true_types stuff = {
		{"c", print_letters},
		{"s", print_letters},
		{"d", print_numbers},
		{"i", print_numbers},
		{"%", print_symbols},
		{"\\", print_letters},
		{NULL, NULL},
	};

	i = 0;
	i2 = 0;
	cprinted = 0;
	ipass = i;
	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i] != '\0')
	{
		i2 = 0;
		while (stuff[i2])
		{
			if (format[i] == *stuff[i2];

			if ((format[i] == "%") || (format[i] == "\\"))
				if (format[i] == stuff[i2].found)
					cprinted = stuff[i2].doThis(list);
			else
			{
				cprinted = print_letters(list, *ipass);
				i = pass;
			}
			i2++;
		}
		i++
	}
	return(cprinted);
}
