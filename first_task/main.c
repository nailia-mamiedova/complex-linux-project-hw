#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "src/calculator.h"


int main() {
	while (true) {
		printf("Enter please the operation you want to perform\n" \
				"Options are:\n" \
				"    s - sum of two numbers; \n" \
            	"    d - difference of two numbers; \n" \
        	    "    p - product of two numbers; \n" \
            	"    f - fraction of two numbers; \n" \
            	"    fact - factorial of a number; \n" \
            	"    sqrt - square root of a number; \n" \
				"    \n" \
				"    x - to exit from program. \n");
		char choice[256];
		scanf("%s", choice);
		if (strcmp(choice, "s") == 0 || strcmp(choice, "d") == 0 ||
    		strcmp(choice, "p") == 0 || strcmp(choice, "f") == 0) {
			float x, y, result;
			printf("Enter the two numbers: ");
			scanf("%f %f", &x, &y);
			if (strcmp(choice, "s") == 0) {
				result = sum(x, y);
			} else if (strcmp(choice, "d") == 0) {
				result = difference(x, y);
			} else if (strcmp(choice, "p") == 0) {
				result = product(x, y);
			} else if (strcmp(choice, "f") == 0) {
				result = fraction(x, y);
			}
			printf("Result is: %g\n \n", result);
		} else if (strcmp(choice, "fact") == 0) {
			unsigned int x, result;
			printf("Enter the number: ");
			scanf("%u", &x);
			result = factorial(x);
			printf("Result is: %u\n \n", result);
		} else if (strcmp(choice, "sqrt") == 0) {
			float x, result;
			printf("Enter the number: ");
			scanf("%f", &x);
			result = square_root(x);
			printf("Result is: %g\n \n", result);
		} else if (strcmp(choice, "x") == 0) {
			printf("Thank you for using our calculator. Exiting the program... \n \n");
			break;
		} else {
  			printf("There's no such option. Try to chose one of the present options. \n \n");
		}
	}
	return 0;
}
