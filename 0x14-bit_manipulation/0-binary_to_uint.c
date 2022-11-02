#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of chars 0 and 1
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	result = 0;
	i = 0;
	result = i;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		result << 1;
		if (b[i] == '1')
		{
			result += 1;
		}
	}
	return (result);
}
