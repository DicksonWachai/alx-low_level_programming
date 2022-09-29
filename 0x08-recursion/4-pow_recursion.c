#include "main.h"
/**
 * _pow_recursion - to calculate the power of an integer using recursion
 * @x: integer one to be raised to the power of
 * @y: integer power
 *
 * Return: value of power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
