#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: prints the sign of a number
 *
 * Return: 1 if Positive, -1 if negative and
 * 0 when equal to zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
