#ifndef _MAIN_
#define _MAIN_
#include <stdarg.h>
#include <stddef.h>
int _putchar(char c);
int _printf(const char* format, ...);
int to_do_from_int(va_list va);
int to_do_from_pourcent(va_list va);
int to_do_from_char(va_list va);
int to_do_from_string(va_list va);
typedef struct op
{
	char *op;
	int (*f)(va_list arg);
} to_do_struct;
#endif
