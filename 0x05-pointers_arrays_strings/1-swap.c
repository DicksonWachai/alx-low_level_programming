#include "main.h"
/**
 * swap_int - switcheroo
 * @a: interger one to be swapped
 * @b: integer two to be swapped
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
