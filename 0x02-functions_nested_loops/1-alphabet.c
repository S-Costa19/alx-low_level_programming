#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
char sm;
for (sm = 'a'; sm <= 'z'; sm++)
{
	putchar(sm);
}
putchar('\n');

}
