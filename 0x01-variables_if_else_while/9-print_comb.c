#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Single digit number combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar('0' + i);
		if (i == 10)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
