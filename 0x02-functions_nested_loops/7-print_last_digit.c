#include "main,h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int last_di = n % 10;

	if (n < 10)
	{
		last_di = last_di * -1;
	}
	_putchar(last_di +'0');

	return (last_di);
}
