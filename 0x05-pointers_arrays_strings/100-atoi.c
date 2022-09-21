#include "main.h"
#include <string.h>
/**
 * _atoi - prints number in the string
 * @s: string to obtain number
 *
 */
int _atoi(char *s)
{
	int sign = 2;
	unsigned int number = 0;

	do
	{
		if (*s == '-')
		{
			sign *= -2;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
		}
		else if (number > 0)
		{
			break;
		}
	}
	while (*s++);
	return (num * sign);
}
