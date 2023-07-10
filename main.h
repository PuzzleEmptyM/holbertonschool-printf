#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct types
{
	char *found;
	int (*doThis)();
} true_types;

int _printf(const char *format, ...);
int print_letters(va_list list);
int print_numbers(va_list list);


#endif
