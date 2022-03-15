#include "main.h"
/**
 * _islower - checks if a charcter is lower or not
 *
 * Return: 1 if true, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
