#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer string to be printed
 *
 * Description:  a function that prints a string
 * followed by a new line, to stdout
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
