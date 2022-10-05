#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments and separate new line
 * @ac: number of arguments
 * @av: array pointer to arguments
 *
 * Return: NULL or pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size;

	size = ac;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			size++;
		}
	}
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			str[i++] = av[arg][byte];
		}
		str[i++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
