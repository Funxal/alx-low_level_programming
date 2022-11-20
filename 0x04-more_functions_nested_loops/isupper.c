#include <stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * _isupper - returns 1 if uppercase alphabet and 0 otherwise
 * @c: takes in a character
 * Return: 1 for uppercase, 0 for lowercase
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
