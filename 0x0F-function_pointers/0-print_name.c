#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to function that prints a name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL || *name == '\0')
		return;

	f(name);
}
