#include "main.h"
/**
 * _strlen - returns lenth of string
 * @s: the input string
 *
 * Description: Function will return lenth
 * of a string
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '0')
	{
		i++;
		s++;
	}
	return (i);
}
