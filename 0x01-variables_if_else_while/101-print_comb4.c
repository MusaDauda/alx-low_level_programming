#include <stdio.h>

/**
 *  main - this program will prints all possible different combinations
 *  of three digits
 *  Return: Program will return 0 when exited successfully
 */
int main(void)
{
	int a,b,c;

	for (a = 48; a <=57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if (a > b && b> c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ( a != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				
				}
			}


		}
	}
}
