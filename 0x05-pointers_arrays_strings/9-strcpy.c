#include "main.h"
/**
 * _strcpy - copy the string pointer from src to dest
 * @dest: the buffer storing the string copy.
 * @src: the source string
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}

	for ( ; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
