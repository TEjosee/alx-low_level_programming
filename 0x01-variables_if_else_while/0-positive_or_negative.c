#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - using the printf function to print negat
 *Return: Always zero for success
 */
int main(void)
{
	int n;
	n = 0;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	if (n == 0)
	printf("%d is zero\n", n);
	if (n < 0)
	printf("%d is negative\n", n);
	return (0);
}
