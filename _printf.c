#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#define opt 2
/**
 * _printf - produces output according to a format
 * @format: is a character string, composed of zero or more directives
 * Description: need to handle conversion specifiers c, s and %
 * Return: the number of characters printed, excluding the null byte used to
 * end output to strings.
 */
int _printf(const char *format, ...)
{
  int i, j, k = 0;
	char *set = "cs";
	char *s;
	va_list arguments;
	int (*ptr2func[opt]) (va_list arguments) = {print_char, print_string};

	va_start(arguments, format);
	if (format == NULL)
	{
		return (-1);
	}
	s = va_arg(arguments, char*);
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '%')
		{
			for (j = 0 ; j < opt ; j++)
			{
				if (s[i + 1] == set[j])
				{
				  k = ptr2func[j] (arguments);
				}
			}
		}
		_putchar(s[i]);
	}
	_putchar('\0');
	va_end(arguments);
	return (i + k);
}
