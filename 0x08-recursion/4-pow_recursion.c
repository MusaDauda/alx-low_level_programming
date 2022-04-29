#include "main.h"

/**
 * _pow_recursion - pow recursion
 * @x: integer params
 * @y: integer paramtr
 * Description: return the result of x to power of y
 */
#include "main.h"

/**
 * _pow_recursion - pow recursion
 * @x: integer params
 * @y: integer parameter
 * Description: return the result of x to power of y
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

