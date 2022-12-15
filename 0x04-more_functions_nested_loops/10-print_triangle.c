#include "main.h"

/**
 * print_triangle - create triangle
 * @size: params
 * Return: 0
 */

void print_triangle(int size)
{
	int k = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; k < size; k++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
