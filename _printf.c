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
	int find_function = 0;
	int find_percent = 0;
	int length = 0;

	if (format == NULL)
		return (-1);

	if(format == '%' && format [i+1] == NULL)
		return(-1);

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i+1] != '\0')
		{
			find_percent = 1;
			while (x < 6)
			{

				if (format[i+1] == form[x].op[0])
				{
					length += form[x].f(args);
					find_function = 1;
				}
				x++;
			}
		}
		else if (format[i] == '%' && format[i+1] == '\0')
		{
			_putchar('%');
			length++;
		}

		if (find_function == 0 && find_percent == 1)
		{
			_putchar('%');
			length++;
		}
		else if (find_function == 0 && find_percent == 0) 
		{
			_putchar(format[i]);
			length++;
		}
		if (find_function == 1)
		{
			find_function = 0;	
			i++;
		}
		if (find_percent == 1)
			find_percent = 0;
		x = 0;
		i++;
	}
	va_end(args);

	return length;
}
