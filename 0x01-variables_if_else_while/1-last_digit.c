#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - using printf function to print to the con
 *Return: Always zero for success
 */
int main(void)
{
	int n;

	n = '5';
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	printf("Last digit of, %d and is greater than\n", n);
	n = '0';
	if (n == 0)
	printf("Last digit of, %d and is\n", n);
	n = '6';
	if (n < 6 &&! 0)
	printf("Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
