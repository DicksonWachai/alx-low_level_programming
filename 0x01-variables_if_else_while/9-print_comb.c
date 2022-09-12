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

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0' + ',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
