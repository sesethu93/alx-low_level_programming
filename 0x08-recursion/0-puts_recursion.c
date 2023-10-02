#include "main.h"

/**
 * _puts_recursion - Function the same as puts();
 * @s: input
 * Return: Always 0 if successful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
