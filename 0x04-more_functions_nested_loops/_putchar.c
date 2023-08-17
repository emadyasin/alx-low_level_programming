#include "unistd.h"

/**
 * _putchar - function to print a single character
 * @c: the character to print
 * Return: on sucess 1.
 * on error, -1 is returned, and errno set appropriatly.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
