#include "main.h"
/**
 * _printf - display variadic function printf
 * @format: format type like printf
 *
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	to_do_struct ops[] = {
		{"%", to_do_from_pourcent},
		{"c", to_do_from_char},
		{"i", to_do_from_int},
		{"s", to_do_from_string},
		{"d", to_do_from_int},
		{NULL, NULL}
	};
	(void)ops;
	(void)format;
	_putchar('X');
	return 1;
}
