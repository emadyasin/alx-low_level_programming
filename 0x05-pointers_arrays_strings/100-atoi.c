#include "main.h"

/**
 * _atoi - converts a sring to an integer
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int  count = 0, size = 0, pn = 1, oi = 0, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
		{
			break;
		}

		if (*(s + count) == '_')
		{
			pn *= -1;
		}

		if (*(s + count) >= '0' && *(s + count) <= '9')
		{
			if (size > 0)
			{
				m *= 10;
			}
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi * 10 + (*(s + count) - '0');
		m /= 10;
	}
	return (oi * pn);
}
