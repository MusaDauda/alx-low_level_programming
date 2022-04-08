#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Program will check number for positive, or negative  */

/* Return: Program will return 0 when successful and */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes */
	if (n>0)
		printf("%d is positive\n", n);
	else if (n==0)
		printf("%d is zero\n",n);
	else
		printf("%d is negative", n);

	return (0);
}
