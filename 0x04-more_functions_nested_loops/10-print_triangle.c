#include "main.h"
/**
 * print_triangle - prints a triangle
 */
void print_triangle(int size)
{
	int start, hashtag;

	if (size > 0)
	{
		for (hashtag = 1; hashtag <= size; hashtag++)
		{
			for (start = size - hashtag; start > 0; start--)
			{
				_putchar(' ');
			}
			for (start = 0; start < hashtag; start++)
			{
				_putchar('#');
			}
			if (hashtag = size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
