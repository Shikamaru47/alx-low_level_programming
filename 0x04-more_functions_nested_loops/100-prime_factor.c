#include <stdio.h>

/**
 * main - print prime
 * Return: 0
 */
int main(void)
{
	unsigned long int k = 3, n = 612852475143;

	for (; k < 12057; k += 2)
	{
		while (n % k == 0 && n != k)
			n /= k;
	}
	printf("%lu\n", n);
	return (0);
}
