#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *last digit of the number stored in the variable
 * Return: Always 0 (Success)
 */
int main(void)
{
/* let Last digit of be last_dig */
int n;
int last_dig;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
last_dig = n % 10;

if (last_dig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
}
else if (last_dig == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_dig);
}
else if (last_dig < 6 && last_dig != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
}
return (0);
}
