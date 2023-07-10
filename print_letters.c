#include "main.h"

/**
 * print_letters - alphabet characters
 * @list: the valie to be printed
 *
 * Return: returns the number of characters printed or -1
 */

int print_letters(va_list list)
{
	in i;
	char *varg;

	i = 0;
	varg = va_arg(list, char *)
		while (varg[i] == '\0')
		{
			_putchar(varg[i]);
			i++;
		}
	return(i);
}
