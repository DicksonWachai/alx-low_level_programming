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

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 10; n++)
		{
			putchar('0' + (i % 10));
			putchar('0' + (n % 10));
			if (i == 8 && n == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
