#include "main.h"

/**
 * *_memcpy - copies memory area
 * @src: source memory data
 * @dest: destination memory area
 * @n: number of bytes to be copied
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
