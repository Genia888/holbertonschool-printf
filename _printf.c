#include "main.h"
/**
 * _printf - display variadic function printf
 * @format: format type like printf
 *
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	type form[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_percent},
                {"i", print_int},
                {"d", print_int},
                {"\0", NULL}
        };

	va_list args;
	unsigned int i = 0;
	unsigned int x = 0;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		while (x < 4)
		{
			if (format[i] == form[x].op[0])
			{
				form[x].f(args);
			}
			x++;
		}
		x = 0;
		i++;
	}
	va_end(args);

	_putchar('\n');
	return 1;
}
