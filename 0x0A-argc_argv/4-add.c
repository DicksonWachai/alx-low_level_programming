#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds sum of positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Retur: sum of positive numbers
 */
int main(int argc, char *argv[])
{
	int num, digit, sum;

	sum = 0;
	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
