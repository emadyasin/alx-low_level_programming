#include <stdio.h>

/**
 * main - computes and prints the sum of multiples
 * of 3 or 5 blow 1024
 * Return: always 0
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (1 % 3 == 0  || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
