#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: The string to be reversed
 * Description: Function to print string
 * in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
