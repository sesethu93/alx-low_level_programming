#include "main.h"

/**
 * _isdigit - checkif numbers are 0 - 9
 * @c: char to be  checked 
 *
 * Return: 0 or 1
 */

int isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
