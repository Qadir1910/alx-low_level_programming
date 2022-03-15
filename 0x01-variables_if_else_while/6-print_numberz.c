#include <stdio.h>

/**
 * main - Prints single digits base 10 an new line
 * Return: zero
 */

int main(void)
{
	int rza;

	for (rza = 0; rza < 10; rza++)
		putchar((rza % 10) + '0');

	putchar('\n');

	return (0);
}
