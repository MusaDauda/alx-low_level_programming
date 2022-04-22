#include "main.h"
/**
 * puts2 - print every other character
 * @str: String to print from
 */
void puts2(char *str)
{
	int counter = 0;
	int len;

	while (str[counter++])
	{
		len++;
	}
	for (counter = 0; counter < len; index +=2)
		_putchar(str[counter]);
	_putchar('\n');
}
