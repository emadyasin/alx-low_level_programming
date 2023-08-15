#include <stdio.h>

/**
 * main - prints the sum of all fibonacci numbers less than 1024
 * Return: alwyas 0 (success)
 */
int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
