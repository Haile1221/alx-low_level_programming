#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * parameter: if n > 0 positive, if n=0 zero and if  < 0 negative*
 * Return: Always 0 (Success)
 */
int main(void)
{	int n;  /* betty check codin*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is Positive number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
