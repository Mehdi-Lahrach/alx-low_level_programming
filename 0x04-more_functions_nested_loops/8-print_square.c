#include "main.h"

/**
 * print_square - prints a square.
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	j = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > 0)
	{
		for (i = 0; i < j; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}
}
