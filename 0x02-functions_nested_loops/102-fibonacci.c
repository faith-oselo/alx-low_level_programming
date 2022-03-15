#include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	int fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%d", sum);

		fib1 = fib2;
		fib2 = sum;
		
		if (count == 49)
			printf('\n');
		else
			printf(", ");
	}

	return (0);
}
