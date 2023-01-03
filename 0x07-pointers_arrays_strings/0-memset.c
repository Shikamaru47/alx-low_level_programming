#include "main.h"

/**
 * _memset() function fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @b
 * @s: A pointer to the memory are to be filled
 * @b: The character to fill the memory area with
 * @n: The number ofbytes to be filled.
 * description_memset: over there
 *
 * Returns: a pointer to the memory area s
 */

void *_memset(void *s, int b, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
