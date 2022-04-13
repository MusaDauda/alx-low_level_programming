#include "main.h"

/**
 * main - print_alphabet
 *
 * Description: prints the alphabet, 
 * in lowercase, followed by a new line.
 *
 * Return: 0 on Success
 */

void print_alphabet(void)
{
	char small_letter = 'a';

	while (small_letter <= 'z')
	{
		_putchar(small_letter);
		small_letter++;
	}
	_putchar('\n');
}
