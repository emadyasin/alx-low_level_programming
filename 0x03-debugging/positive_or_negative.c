#include "main.h"

/**
 * main - determine is positive, negative or zero
 (* 0: is the number to be checked
 * Return: o on success
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
