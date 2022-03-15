#include <stdio.h>
/**
 * main - Prints the sum of even-valued fibonacci sequence terms
 *	not exceeding 4000000.
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	long total_sum;

	while(1)
	{
		sum = fib1 + fib2;
		if (sum > 400000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", total_sum);

	return (0);
}
