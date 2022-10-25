#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: first argument
 * @src: second argument
 * Return: returns dest if successful
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = srs[i];
	}
	dest[i] = '\0';
	return (dest);
}
