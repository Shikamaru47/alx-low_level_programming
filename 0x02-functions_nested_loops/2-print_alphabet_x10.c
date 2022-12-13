#include "main.h"
#include <unistd>

/**
 * print_alphabet - entry point
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)i
{
char c = 'a';
int d;

while (c <= 'z')
{
	for (d = 0; d <= 10; d++)
	{

_putchar(c);
c++;
}
}
_putchar('\n');
}
