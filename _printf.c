#include "main.h"

/**
* _printf - custom printf function
* @format: Character string
* Return: num of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;

	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(args);
					break;
				case 's':
					count += print_string(args);
					break;
				case '%':
					count += print_percent(args);
					break;
				case 'd':
				case 'i':
					count += print_integer(args);
					break;
				default:
					write(1, &format[i - 1], 1);
					write(1, &format[i], 1);
					count += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}

	va_end(args);
	return (count);
}
