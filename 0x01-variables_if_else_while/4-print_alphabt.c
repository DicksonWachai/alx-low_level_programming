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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		while (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
