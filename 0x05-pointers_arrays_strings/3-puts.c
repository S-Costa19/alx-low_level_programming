#include "stdio.h"
#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: prints a string, followed by a new line
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int sm = o;

	while (str[sm])
	{
		_putchar(str[sm]);
		sm++;
	}
	_putchar('\n');
}
