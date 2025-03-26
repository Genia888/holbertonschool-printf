#include "main.h"

/**
 * putchar_car-for the betty style
 * @c: caracter
 * @param: parametre
 *
 */
void putchar_car(char c, int *param)
{
	_putchar(c);
	*param = *param + 1;
}
/**
 * work_find_function - to reduce code
 * @value: find_function variable
 * @i: increment
 */
void work_find_function(int *value, unsigned int *i)
{
	if (*value == 1)
	{
		*value = 0;
		*i = *i + 1;
	}
}

/**
 * _printf - display variadic function printf
 * @format: format type like printf
 *
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	type form[] = { {"c", print_char}, {"s", print_string}, {"%", print_percent},
		{"i", print_int}, {"d", print_int}, {"\0", NULL} };
	va_list args;
	unsigned int i = 0, x = 0;
	int find_function = 0, find_percent = 0, length = 0;

	if ((format == NULL) && (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			find_percent = 1;
			while (x < 6)
			{
				if (format[i + 1] == form[x].op[0])
				{
					length += form[x].f(args);
					find_function = 1;
				}
				x++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			putchar_car('%', &length);
		if (find_function == 0 && find_percent == 1)
			putchar_car('%', &length);
		else if (find_function == 0 && find_percent == 0)
			putchar_car(format[i], &length);
		work_find_function(&find_function, &i);
		if (find_percent == 1)
			find_percent = 0;
		x = 0;
		i++;
	}
	va_end(args);
	return (length);
}
