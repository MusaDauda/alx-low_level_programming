#include "main.h"

/**
 * _islower - Checks if a letter
 * is lowercase
 *
 * @c: c is an ASCII Character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
	return (0);
}
