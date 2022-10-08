#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, e, g;

	i = 48;
	e = 48;
	g = 48;

	while (e < 56)
	{
		i = 48;
		while (i < 57)
		{
			g = 48;
			while (g < 58)
			{
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (e != 55)
					{
					putchar(',');
					putchar(' ');
					}
				}
				g++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
