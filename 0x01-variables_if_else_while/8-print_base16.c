#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Base 16
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 10; i++)
	{
		putchar('0' + i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch + '\n');
	}
	return (0);
}
