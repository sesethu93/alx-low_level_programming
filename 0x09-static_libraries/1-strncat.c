#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concantenare two strings
 * @dest: Destination of string
 * @src: Source of String
 * @n: number of bytes contatenates
 * Resturn: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
