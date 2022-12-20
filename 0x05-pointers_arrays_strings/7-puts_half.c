#include "main.h"
#include <stdio.h>

/**
 * puts_half - function to print half of a string
 *
 * @str: provided string
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int count = 0, k;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		k = count / 2;
	else
		k = (count - 1) / 2;
	for (k++; k < count; k++)
		_putchar(str[k]);

	_putchar('\n');
}
