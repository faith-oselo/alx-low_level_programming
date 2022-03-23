#include "main.h"

/**
 * leet - encode a string 1337.
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;

	while (string[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}

		i++;
	}
}
