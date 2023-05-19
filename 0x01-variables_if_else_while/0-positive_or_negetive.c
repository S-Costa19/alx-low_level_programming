#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - This program will assign a random number to the variable n
 *each time it is executed. Complete the source code in order to
 *print whether the number stored in the variable n is positive or negative.
 *
 *Return:always 0
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	}
	printf("The number is positive.\n");
	}
	else if (n < 0)
	{
	printf("The number is negative.\n");
	}
	else
	{
	printf("The number is zero.\n");
	}
	return (0);
}
