#include <stdio.h>
/**
 * _strncpy - Function that copies a string
 * @dest: Pointer to a character that will be changed
 * @src: Pointer to a character that will be changed
 * @n: value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
