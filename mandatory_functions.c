#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * pcc - print data type char
 * @argument: arguments
 * Return: the number of characters printed, excluding the null byte used to
 * end output to strings.
 */
int pcc(va_list argument)
{
	char c;

	c = va_arg(argument, int);
	_putchar(c);
	return (1);
}

/**
 * pcs - print data type string
 * @argument: arguments
 * Return: the number of characters printed, excluding the null byte used to
 * end output to strings.
 */
int pcs(va_list argument)
{
	char *s;
	int i;

	s = va_arg(argument, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
/**
 * pcpc - Prints percentage
 * @argument: the character percentage to print
 * Return: int, the number of characters printed with function
 */
int pcpc(va_list argument)
{
	char per;
	(void)argument;

	per = '%';
	_putchar(per);
	return (1);
}
/**
 * pcd - print data type number
 * @argument: arguments to print
 * Return: the number of characters printed, excluding the null byte used to
 * end output to strings.
 */
int pcd(va_list argument)
{
	int number = va_arg(argument, int);
	int i, k, number1, dec, dig;

	number1 = 0;
	dec = 1;
	dig = 0;
	k = 0;
	if (number == 0)
	{
		return (0);
	}
	if (number < 0)
	{
		_putchar('-');
		number = number * -1;
		k++;
	}
	number1 = number;
	for (i = 1; number1 > 9; i++)
	{
		number1 = (number1 / 10);
		dec = dec * 10;
	}
	number1 = number;
	for (i = 0 ; dec > 9; i++)
	{
		dig = (number1 / dec);
		_putchar(dig + '0');
		number1 = number1 - (dig * dec);
		dec = dec / 10;
		k++;
	}
	_putchar(number1 + '0');
	k++;
	return (k);
}
