#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <math.h>

int main()
{
	unsigned long int maior = 0;
	long int i = 226;
	for (maior = 7; (maior * maior) < i; maior += 1);
	maior -= 1;
	printf("maior %ld\n", maior);
};	// main()