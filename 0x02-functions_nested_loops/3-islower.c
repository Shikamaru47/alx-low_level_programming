#include "main.h"
/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
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
