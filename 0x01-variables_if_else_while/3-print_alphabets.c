#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */

int main(void)

{
int sm;

for (sm = 'a'; sm <= 'z'; sm++)

{

putchar(sm);

}

for (sm = 'A'; sm <= 'Z'; sm++)

{
putchar(sm);
}

putchar('\n');
return (0);
}
