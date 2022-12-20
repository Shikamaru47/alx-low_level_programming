#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function copies string pointed to src and dest
 * @dest: Pointer parameter
 * @src: poiter parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; *(src + k) != '\0'; k++)
	{
		dest[k] = *(src + k);
	}
	dest[k] = '\0';

	return (dest);
}
