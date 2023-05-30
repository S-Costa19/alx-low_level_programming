#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse followed by a new line
 * @s: prints a string, in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int sm = 0;

	while (s[sm])
	sm++;

	whlie(sm--)
		_putchar(s[sm]);
		_putchar('\n');
}
