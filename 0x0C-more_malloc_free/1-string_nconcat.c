#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *concat;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		for (len1 = 0; s1[len1]; ++len1)
		;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		for (len2 = 0; s2[len2]; ++len2)
		;
	}
	if (len2 > n)
		len2 = n;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len2; i++)
		concat[i + len1] = s2[i];
	concat[len1 + len2] = '\0';
	return (concat);
}
