#include "main.h"
/**
 * print_char - get an argument from char and display it
 * @args: arguments
 * Return: 1 Length of the string display
 */

int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	_putchar(character);

	return (1);
}
