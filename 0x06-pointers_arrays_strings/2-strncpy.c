#include "main.h"
/**
 * *_strncpy - function that copies string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used.
 *
 * Return: destination string
 */

char *_strncpy(char *de	st, char *src, int n)
{
	int count_of_bytes;
	
	for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0'; count_of_bytes++)
		dest[count_of_bytes] = src[count_of_bytes];

	for (; count_of_bytes < n; count_of_bytes++)
		dest[count_of_bytes] = '\0';
	return (dest);
}
