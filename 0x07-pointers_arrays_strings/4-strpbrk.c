#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any os a set of bytes
 * @s: a string
 * @accept - set og bytes to be searched for
 * Return: a pointer to the matched byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
