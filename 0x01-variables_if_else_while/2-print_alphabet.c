#include <stdio.h>
/**
 *  main - Write a program that prints the alphabet
 *  in lowercase, followed by a new line
 *  Return: Zero(0) for a Success
 */
int main(void)

{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);

}
