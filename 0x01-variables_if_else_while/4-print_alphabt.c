#include <stdio.h>
/**
 *main - entry point
 *Return: 0 success
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
