#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n; 
	
	for (n = 0; n < 9; n++)
	{
		putchar(n + '0');
		putchar(",");
		putchar(" ");
	}
	putchar('9');

	return (0);
}

