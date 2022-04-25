#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1 : pointer to char param
 * @s2 : pointer to char params of string
 * Return: compared string(*dest)
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while(s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
