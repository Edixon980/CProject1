
#include <stdio.h>

unsigned int factorial( unsigned int fact );


int main() {

	unsigned int k,j;
	
	puts(" Factorial ");
	
	
	for (j = 13; j >= 1; j -= 2) {

		printf(" %u ! = %u\n", j, factorial(j));
	}
	for (k = 2;k <= 14; k += 2) {

		printf(" %u ! = %u\n", k, factorial(k));

	}
}

unsigned int factorial( unsigned int fact ) 
{
	unsigned int result = 1;
	unsigned int i = 1;
	for (i = 1; i<= fact; ++i) {
		result *= i;
	}
	
	return result;
}
