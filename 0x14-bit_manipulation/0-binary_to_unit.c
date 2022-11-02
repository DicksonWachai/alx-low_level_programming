#include "main.h"
/**
 * binary_to_int - converts from base 2 to decimal
 * @b: points to a string of characters2
 *
 * Return: converted number or 0
 */
unsigned int binary_to_int(const char *b)
{
	unsigned value = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		value << 1;
		if (*b & 1)
		{
			value += 1;
		}
		b++;
	}
	return (value);
}
