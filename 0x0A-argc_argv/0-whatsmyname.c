#include <stdio.h>

/**
 * main - Prints name of program with a new line
 *
 * @argc: The number of arguments supplied to the program
 * @argv: A vector array of pointer to the arguments
 * Description: Func will print  name of program
 * Return: Zero(0) on Success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return(0);
}
