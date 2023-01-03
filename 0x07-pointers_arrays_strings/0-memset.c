#include "main.h"

/**
 * _memset() function fills memory with a constant byte
 * @s: A pointer to the memory are to be filled
 * @b: The character to fill the memory area with
 * @n: The number ofbytes to be filled.
 * description_memset: over there
 *
 * Returns: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
