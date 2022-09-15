#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to get the last digit
 *
 * Return: the last digit of a number
 */
int print_last_digit(int i)
{
	int lastDigit;
	lastDigit = i % 10;

	_putchar(lastDigit + '0');
}
