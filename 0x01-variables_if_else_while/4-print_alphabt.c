#include <stdio.h>

/**
 * main - Prints alphabet in lowercase except q and e
 * Return: zero
 */

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if (ab != 'e' && ab != 'q')
			putchar(ab);
	}


	putchar('\n');

	return (0);
}
