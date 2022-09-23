#include <stdio.h>
#include "main.h"

/**
 * main - print the pointer value
 * reset_to_98 - resets int n value
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
/**
 *  * reset_to_98 - resets value of pointer to 98
 *   * @n: pointer to reset to 98
 *    *
 *     * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
