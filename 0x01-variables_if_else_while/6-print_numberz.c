#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
