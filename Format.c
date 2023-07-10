#include "main.h"

/**
 * Format - Prints the values given with a separator
 * @tempc: The value to compare to format
 * @list: The arguement list to pass to resulting function
 *
 * Return: Returns the number of characters printed or -1
 */

int Format(char tempc, va_list list)
{
	int i, cprinted;
	true_types stuff[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", NULL},
		{NULL, NULL},
	};

	i = 0, cprinted = 0;
	while (i < 5)
	{
		if (tempc == *stuff[i].found)
		{
			if (i != 4)
			{
				cprinted = cprinted + stuff[i].doThis(list);
				i = 10;
			}
			else
			{
				_putchar(37);
				cprinted++;
				i = 10;
			}
		}
		else
			i++;
	}
	if (i != 10)
	{
		_putchar(37);
		_putchar(tempc);
		cprinted = cprinted + 2;
	}
	return (cprinted);
}
