#include <stdio.h>
#include "main.h"

/**
 * main - print the pointer value
 * reset_to_98 - resets int n value
 *
 * Return: Always 0
 *
 */
void reset_to_98(int *n)
{
	*n = 98;
}
int main(void)
{
	int n;

	n = 4;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
