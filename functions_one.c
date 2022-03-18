#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * pcb - transform an unsigned base 10 number to a base 2 number
 * @argument: argument passed
 * Description: transform the an unsigned base 10 number n, to a base 2 number
 * and prints the s[j] digits of the base 2 number.
 * Return: length of the base 2 number
 */
int pcb(va_list argument)
{
	unsigned int n, m, i, j;
	char *s;

	n = va_arg(argument, int);
	m = n;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0 ; m >= 1 ; i++)
	{
		m /= 2;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (-1);
	}
	for (j = 1 ; n >= 1 ; j++)
	{
		s[j] = (n % 2) + '0';
		n /= 2;
	}
	s[j] = '\0';
	for (i = j - 1 ; i > 0 ; i--)
	{
		_putchar(s[i]);
	}
	free(s);
	return (j - 1);
}
