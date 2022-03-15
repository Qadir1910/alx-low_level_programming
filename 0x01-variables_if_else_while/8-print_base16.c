#include <stdio.h>

/**
 * main - Prints base 16 numbers in lower
 * Return: zero
 */

int main(void)
{
	int rza;
	char ab;

	for (rza = 0; rza < 10; rza++)
		putchar((rza % 10) + '0');

	for (ab = 'a'; ab <= 'f'; ab++)
		putchar(ab);

	putchar('\n');

	return (0);
}
