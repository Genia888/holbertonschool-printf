#include "main.h"
#include <stdarg.h>

/**
 * print_string - print the string 
 * @args: list of arguments
 *
 * Return: the total number of characters printed
 */

int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int i = 0;

    if (!str)
        str = "(null)";

    while (str[i]) {
        _putchar(str[i]);
        i++;
    }

    return i;
}
