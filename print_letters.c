#include "main.h"

/**
 * print_char - alphabet characters
 * @list: list of args
 *
 * Return: returns the number of characters printed or -1
 */

int print_char(va_list list)
{
	int varg;

	varg = va_arg(list, int);
	_putchar(varg);
	return (-1);
}

/**
 * print_char2 - alphabetic characters
 * @list: list of args
 *
 * Return: returns thenumber of characters printed or -1
 */

int print_char2(char c)
{
	if (c == ' ')
		_putchar(' ');
	else
		_putchar(c);
	return (1);
}

/**
 * print_string - prints string
 * @list: list of args
 *
 * Return: the number of characters printed or -1
 */

int print_string(va_list list)
{
	char *varg2;
	int i;

	i = 0;
	varg2 = va_arg(list, char *);
	if (varg2 != NULL)
	{
		while (varg2[i] != '\0')
		{
			_putchar(varg2[i]);
			i++;
		}
		return (i);
	}
	else
		return (-1);
}
