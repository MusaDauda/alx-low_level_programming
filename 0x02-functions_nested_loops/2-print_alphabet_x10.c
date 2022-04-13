#include "main.h"

/**
 * print_alphabet_x10 - print all lowercase alphabet
 * 10 times
 *
 * Description: This program will prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: 0 on Success
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char ch = 'a';

	for (round = 0; round < 10; round++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
