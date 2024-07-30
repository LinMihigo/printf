#include "main.h"
/**
* print_integer - print ints
* @args: args
* Return: int
*/
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int count = 0, i = 0;
	unsigned int num;
	char buffer[1000];

	if (n < 0)
	{
		count += write(1, "-", 1);
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num != 0)
		{
			buffer[i++] = '0' + (num % 10);
			num /= 10;
		}
	}

	while (i--)
	{
		count += write(1, &buffer[i], 1);
	}

	return (count);
}
