#include "main.h"
/**
 * reverse_array - reverses integers in array
 * @a: pointer to array
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, last_element, temp;

	last_element = n - 1;
	for (i = 0; i < last_element; i++)
	{
		temp = a[i];
		a[i] = a[last_element];
		a[last_element] = temp;
	}
}
