#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#define opt 3
/**
 * _printf - produces output according to a format
 * @format: is a character string, composed of zero or more directives
 * Description: need to handle conversion specifiers c, s and %
 * Return: the total number of characters printed, excluding the null byte used to
 * end output to strings.
 */
int _printf(const char *format, ...)
{
	int i, j, k = 0;
	char *set = "cs%";
	va_list argument;
	int (*ptr2func[opt]) (va_list argument) = {print_char, print_string, print_perc};

	va_start(argument, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0 ; j < opt ; j++)
			{
				if (format[i + 1] == set[j])
				{
					k += ptr2func[j](argument);
					i = i + 1;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			k++;
		}
	}
	va_end(argument);
	return (k);
}
