#include <stdio.h>
#include "main.h"

/**
 * print_array - Function prints element of array of integers
 * @a: Pointer parameter
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		printf("%d", *(a + k));
		if (k != (n - 1))
			printf(", ");
	}
	printf("\n");
}
