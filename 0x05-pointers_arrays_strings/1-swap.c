#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 * main - checks the code
 */
void swap_int(int *a, int *b)
{
	int pop;

	pop = *a;
	*a = *b;
	*b = pop;
}
