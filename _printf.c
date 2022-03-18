#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#define opt 4
/**
 * _printf - produces output according to a format
 * @format: is a character string, composed of zero or more directives
 * Description: need to handle conversion specifiers c, s and %
 * Return: the total number of characters printed,
 * excluding the null byte used to
 * end output to strings.
 */
int _printf(const char *format, ...)
{
	int i, j, k = 0;
	char *set = "csb%";
	va_list argument;

	int (*ptr2func[opt]) (va_list argument) = {
	pcc, pcs, pcb, pcpc
	};
	va_start(argument, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			for (j = 0 ; j <= opt ; j++)
			{
				if (j == opt)
				{
					k += ptr2func[j - 1](argument);
				}
				if (format[i + 1] == set[j])
				{
					k += ptr2func[j](argument);
					i = i + 1;
					break;
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
