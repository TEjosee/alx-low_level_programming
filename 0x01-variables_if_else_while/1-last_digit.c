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
	int a;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d ", n, a);
	if (a > 5)
	printf("and is greater than 5\n");
	
	else if (a < 6 && a != 0)
	printf("and is less than 6 and not 0\n");
	
	else
	printf("and is 0\n");
	return (0);
}
