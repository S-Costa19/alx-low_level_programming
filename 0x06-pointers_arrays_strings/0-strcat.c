#include <sttdio.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: the source string to append to @char *dest
 * @dest: the destiation string to be concatenated
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;

	int dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
