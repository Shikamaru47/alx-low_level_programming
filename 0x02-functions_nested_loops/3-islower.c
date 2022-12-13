#include "main.h"

/**
 * print lowercase character - checks for lowercase character.
 *
 * Return: void
 */

int _islower(int c)
{
int n = 'a';

for (n = 'a'; n <= 'z'; n++)
{

if (c == n)
{
return (1);
}
}
return (0);
}
