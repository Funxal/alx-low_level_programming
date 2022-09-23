#include "main.h"

/**
 *  * _strcat - Concatenates the string pointed to by @src,
 *   * null byte, to the end of the string pointed to by @dest.
 *    * @dest: A Destination pointer to the string.
 *     * @src: The source string to be appended to @dest.
 *      *
 *       * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
	len++;

	for (i = 0; src[i]; i++)
	dest[len++] = src[i];

	return (dest);
}
