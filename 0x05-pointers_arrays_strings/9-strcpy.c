#include "main.h"

/**
 * *_strcpy - copy strg to another string
 * @dest: destribution pointer
 * @src: source pointer
 * Return: dest on success
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
