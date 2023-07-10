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

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_char2(char c);
int Format(char tempc, va_list list);


#endif
