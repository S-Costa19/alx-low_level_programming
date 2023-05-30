#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */

void puts_half(char *str)

{
int sm;
for (sm = 0; str[sm] != '\0'; sm++)
;
sm++;
for (sm /= 2; str[sm] != '\0'; sm++)
{
_putchar(str[sm]);
}
_putchar('\n');
}
