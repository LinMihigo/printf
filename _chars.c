#include "main.h"
/**
 * print_char - prints char
 * @args: args
 * Return: int
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_string - print string
 * @args: args
 * Return: int
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;

	if (!str)
	str = "(null)";

	while (str[count])
	count += write(1, &str[count], 1);

	return (count);
}

/**
 * print_percent - print '%'
 * @args: args
 * Return: int
 */
int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
