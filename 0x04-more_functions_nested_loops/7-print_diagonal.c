#include "main.h"

/**
 * print_diagonal - print slash
 * @n: params
 */

void print_diagonal(int n)
{
	int b = 0;
	int j;

	if (n > 0)
	{
		for (; b < n; i++)
		{
			for (j = 0; j < b; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
