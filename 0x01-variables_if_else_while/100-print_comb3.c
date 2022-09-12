#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Two digit combinations
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (i < n)
			{
				putchar('0' + i);
				putchar('0' + n);
				putchar(',');
				putchar(' ');
			}
			else 
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
