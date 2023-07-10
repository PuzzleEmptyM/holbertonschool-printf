include "main.h"

/**
 * print_num - number values to be printed
 * @list: numbers to print
 *
 * Return: returns number of characters printed or -1
 */

int print_num(va_list list)
{
	unsigned int varg3;
	unsigned int varg33;
	unsigned int indiv;
	int varg3s;
	int i;
	int tempv;

	i = 0;
	indiv = 0;
	tempv = 0;
	varg3 = va_arg(list, unsigned int);
	varg3s = varg3;
	varg33 =varg3;
	if (varg3)
	{
		if (varg3s < 0)
		{
			_putchar('-');
			i++;
			varg3 = varg3 * -1;
			varg33 = varg3;
		}
		while (varg3 > 9)
		{
			varg3 = varg3 / 10;
			indiv = indiv * 10;
		}
		while (indiv > 9)
		{
			tempv = varg33 / indiv;
			_putchar(tempv + 48);
			varg33 = varg33 % indiv;
			indiv = indiv / 10;
			i++;
		}
		_putchar(varg33 + 48);
		return (i);
	}
	return (-1);
}
