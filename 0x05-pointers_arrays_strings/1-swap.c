#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap tow intigers
 * @a: first intiger
 * @b: second intiger
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
