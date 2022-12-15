#include "main.h"

/**
 * print_square - prints square
 * @size: param
 */

void print_square(int size)
{
	int k = 0, j;

	if (size > 0)
	{
		for (; k < size; k++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

