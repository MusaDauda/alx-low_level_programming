#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: pointer to char parameter
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char l[] = "ol_ea_t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] || s[i] == (l[j] -32)
		{
			s[i] = j + '0';
		}
	}
	return (s);
}
