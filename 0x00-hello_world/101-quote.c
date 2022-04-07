/**
 * main - Entry point
 * Write a C program that prints exactly and that piece of art is useful 
 * - Dora Korpar, 2015-10-19,
 *   followed by a new line, to the standard error
 * Return: Always 0 (Success)
 * */
#include <stdio.h>
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 70);
return (1);

}
