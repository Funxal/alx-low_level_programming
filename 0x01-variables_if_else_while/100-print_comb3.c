#include <stdio.h>

/**
 * main - Prints numbers between 01 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, h;
	int i = 32;
	int v = 44;

	h = 48;
	e = 48;
	while (e < 57)
	{
	h = 48;
	while (h < 58)
	{
	if (h != e && e < h)
	{
		putchar(e);
		putchar(h);
		if (e != 56)
		putchar(v);
		putchar(i);
	}
		h++;
	}
		e++;
	}
		putchar('\n');
		return (0);
}
