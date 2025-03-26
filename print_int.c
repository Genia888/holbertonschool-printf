#include "main.h"

void reverse(char s[]);

/**
 * itoa - convertir n en caractères dans s
 * @n: value to convert
 * @s: string buffer
 *
 */
void itoa(long n, char s[])
{
	long i, sign;

	sign = n;
	if (sign < 0)
		/* enregistrer le signe */
		n = -n;
	/* rendre n positif */
	i = 0;
	do {
		s[i++] = n % 10 + '0';
		/* obtenir le chiffre suivant */
	} while ((n /= 10) > 0); /* le supprimer */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/**
 * _strlen - calculate the length of a string
 * @s: string to calculate
 *
 * Return: length
 */
int _strlen(char *s)
{
	int retour = 0;

	while (*s != '\0')
	{
		s++;
		retour++;
	}
	return (retour);
}

/**
 * reverse - reverse a string
 * @s: string to reverse
 */
void reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}


/**
 * print_int - get an argument from int and display it
 * @va: va_list param
 * Return: Length of the string display
 */
int print_int(va_list va)
{
	int value;
	char buffer[100];
	char *ptr_string = buffer;
	int length = 0;

	value = va_arg(va, int);
	itoa(value, buffer);
	if (ptr_string != NULL)
	{
		while (*ptr_string != '\0')
		{

			_putchar(*ptr_string);
			ptr_string++;
			length++;
		}
	}
	return (length);
}
