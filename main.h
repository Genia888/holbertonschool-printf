#ifndef _MAIN_
#define _MAIN_
#include <stdarg.h>
#include <stddef.h>
int _putchar(char c);
int _printf(const char* format, ...);
int print_int(va_list va);
int print_percent(va_list va);
int print_char(va_list va);
int print_string(va_list va);
typedef struct op
{
	char *op;
	int (*f)(va_list arg);
} type;
#endif
