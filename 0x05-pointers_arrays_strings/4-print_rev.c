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
	int i;
	int len;

	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s++;
	}
}
