#include <stdio.h>

/**
 * main - Prints reverse lowercase alphabet
 * Return: zero
 */

int main(void)
{
	char ab;

	for (ab = 'z'; ab >= 'a'; ab--)
		putchar(ab);

	putchar('\n');

	return (0);
}
