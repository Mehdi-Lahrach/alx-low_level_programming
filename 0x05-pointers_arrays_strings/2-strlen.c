#include "main.h"
#include <stdio.h>

/**
 * _strlen - count characters in a string
 *@s: the string
 *
 * Return: size of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
