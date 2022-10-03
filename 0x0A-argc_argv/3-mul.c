#include <stdio.h>
/**
 * main - prints out multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Product of two integers otherwise Error and 1
 */
int main(int argc, char *argv[])
{
	int i, product;

	product = 1;
	for (i = 0; i < argc; i++)
	{
		if (argv[i] != NULL && argv[i++] != NULL)
		{
			product *= atoi(argv[i]);
			printf("%d\n", product);
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
}
