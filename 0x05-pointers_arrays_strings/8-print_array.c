#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: pointer to array
 * @n: number of elements in an array
 */
void print_array(int *a, int n)
{
	printf("%d, ",*(a + n));
}
