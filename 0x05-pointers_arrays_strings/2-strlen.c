#include "stdio.h"
#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: return the lenght of a stringe
 *
 * Return: always 0
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0 '\0')
{
	length++;
	s++;
}
	return (0);
}

