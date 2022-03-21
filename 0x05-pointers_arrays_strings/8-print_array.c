#include <stdio.h>
/**
 * print_array - print the content of the array
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int x;

	while (n-- > 0)
	{
		printf("%d", a[x++]);
		if (n != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
