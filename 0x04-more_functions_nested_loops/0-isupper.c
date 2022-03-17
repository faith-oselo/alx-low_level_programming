#include "main.h"
/*
 * isupper - checks for uppercase characters
 * @c: the charcter to be checked
 * 
 * Return: 1 if character is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
        	return (1);
	else
		return (0);
}
