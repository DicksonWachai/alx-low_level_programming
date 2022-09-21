#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string to another string
 * @dest: the destined to be copied to
 * @src: the source of copied string
 *
 * Return: the value of copied string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (*dest);
}
