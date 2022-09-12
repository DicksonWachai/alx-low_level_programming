#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
