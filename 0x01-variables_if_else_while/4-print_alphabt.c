#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Exempted Characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	while ((ch >= 'a' && ch <= 'z') || (ch != 'e' && ch != 'q'))
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
