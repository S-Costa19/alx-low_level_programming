#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{

int sm;
for (sm = 'a'; sm <= 'z'; sm++)
{
if (sm != 'e' && sm != 'q')
{
putchar(sm);
}
else
{
}
}
putchar('\n');
return (0);

}
