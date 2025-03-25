#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * get_function - fucntion that check  type of character
 * @format: list of format checked
 * Return: 0
 */

int (*get_function(const char *format))(va_list)

{
	type form[] = {
		{"c", pr_char},
		{"s", pr_string},
		{"%", pr_percent},
		{"i", pr_integer},
		{"d", pr_integer},
		{"\0", NULL}
	};

	int i = 0
