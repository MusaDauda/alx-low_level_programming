#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: one of int to be swapped
 * @b: The other to be swapped
 *
 * Description: This function will swap values
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *p = a;
	a = b;
	b = *p;

}
