#include <unistd.h>
#include "function_pointers.h"

/**
 * print_name - print name using pointer function
 * @name: string to add
 * @f: pointer to function
 * Retun: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
