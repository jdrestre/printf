#include "holberton.h"
/**
 * _printf - Function construction that performs the same as printf in C
 *
 * @format: string for analyze
 * Return: Integer
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, len = 0;
	int ch;

	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar(format[i])
				len++;
			}
				if (format[i] == 'c')
				{
				len = len + new_fun(format[i])(list);
				}
				else if (format[i] != '%')
				{
					_putchar('%');
						_putchar(format[i]);
						len + 2;
				}

		}
	}
}
