#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: reverses a string
 *
 * Return: always 0
 */

void rev_string(char *s)

{
int len, sm, half;
char temp;
for (len = 0; s[len] != '\0'; len++)
;
sm = 0;
half = len / 2;
while (half--)
{
temp = s[len - sm - 1];
s[len - sm - 1] = s[sm];
s[sm] = temp;
sm++;
}
}
