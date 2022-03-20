#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * *rot13 - encodes a string into 1337 changing some letters to numbers
 * @argument: char string to be encoded
 * Return: number of characters printed
 */
int r13(va_list argument)
{
char s;
int i, j, k;
char let1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char subst[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

s = va_arg(argument, char);
for (i = 0 ; s[i] != '\0' ; i++)
{
	for (j = 0 ; j <= 52 ; j++)
	{
		if (s[i] == let1[j])
		{
			s[i] = subst[j];
			_putchar(s[i]);
		k++;
		}
	}
}
return (k);
}
/**
* print_rev - prints a reversed string
* @s: char array to be reversed
* Return: void
*/

int pre(va_list argument)
{
	int i, j;
	char s;

s = va_arg(argument, char);
for (i = 0 ; s[i] != '\0' ; i++)
{
}
for (j = i - 1 ; j >= 0 ; j--)
{
	_putchar(s[j]);
	k++;
}
return (k);
}
