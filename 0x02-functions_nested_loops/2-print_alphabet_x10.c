#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char c = 'a';
int d;
d = 0;
do (c <= 'z')
{
_putchar(c);
c++;
}
while (d <= 10)
{
_putchar('\n');
}
}
