#include <stdio.h>

/**
 * main - main funtion
 *
 * Return - retun 0 unless otherwise
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
