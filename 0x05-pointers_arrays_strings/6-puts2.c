#include "main.h"
/**
 * puts2 - print every other character
 * @str: String to print from
 */
void puts2(char *str)
{
	int counter = 0;
	int len = 0;

	while (str[counter++])
	{
		len++;
	}
	for (counter = 0; counter < len; counter += 2)
	{
		_putchar(str[counter]);
	}

	_putchar('\n');
}
