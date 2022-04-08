#include <stdio.h>

/**
 * main - Write a program that prints all single digit 
 * numbers of base 10 starting from 0
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
