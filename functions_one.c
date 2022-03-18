#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * pcb - transform an unsigned base 10 number to a base 2 number
 * @argument: argument passed
 * Description: transform the an unsigned base 10 number n, to a base 2 number
 * and prints the b digits of the base 2 number.
 * Return: length of the base 2 number
 */
int pcb(va_list argument)
{
	unsigned int n, i, j;
	char *s;

	n = va_arg(argument, int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0 ; n >= 1 ; i++)
	{
		n = (n - n % 2) / 2;
	}
	s = malloc( sizeof(char*) * (i + 1));
	if (s == NULL)
	{
		free(s);
		return (-1);
	}
	for (j = i ; n >= 1 ; j--)
	{
		s[j] = (n % 2) + '0';
		n = (n - n % 2) / 2;
		putchar(s[j]);
	}
	free(s);
	return (i);
}
