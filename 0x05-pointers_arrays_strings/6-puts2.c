#include <stdio.h>
#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string
 * @str: starting with the first character, followed by a new line.
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int sm = 0;

	while (str[sm] != '\0')
	{
	if (sm % 2 == 0)
	{
		_putchar(str[sm]);
	}
	sm++;
	}
	_putchar('\n');
}
