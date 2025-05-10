#include <stdio.h>
#include "calculator.h"


unsigned int factorial(unsigned int a) {
	unsigned int i;
	unsigned int result = 1;

	for (i = 1; i <= a; i++) {
		result *= i;
	}

	return result;
}
