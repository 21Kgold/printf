#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_char - print data type char
 * @arguments: arguments
 * Return: the number of characters printed, excluding the null byte used to
 * end output to strings.
 */
int print_char(va_list argument)
{
	char c;

	c = va_arg(argument, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - print data type string
 * @arguments: arguments
 * Return: the number of characters printed, excluding the null byte used to
 * end output to strings.
 */
int print_string(va_list argument)
{
	char *s;
	int i;

	s = va_arg(argument, char *);

	if (s == NULL)
	{
		s = "(NIL)";
	}
	for (i = 0; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}