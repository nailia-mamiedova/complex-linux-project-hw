#include <stdio.h>
#include <stdbool.h>
#include "src/format.h"

int main() {
	while (true) {
		printf("This program is created to format string to lower or upper case\n" \
				"Select the option:\n" \
				"    l - format to lower case; \n" \
            	"    u - format to upper case; \n" \
				"    \n" \
				"    x - to exit from program. \n");
		
		int c;	
		char choice;
		char string[256];
		scanf(" %c", &choice);
		while ((c = getchar()) != '\n' && c != EOF);  // Clear input buffer
	
		switch (choice) {
			case 'l':
        		printf("Now, please enter the string you want to format: \n");
        		fgets(string, sizeof(string), stdin);
				lower(string);
				break;
			case 'u':
        		printf("Now, please enter the string you want to format: \n");
        		fgets(string, sizeof(string), stdin);
				upper(string);
				break;
			case 'x':
				printf("Thank you for using our program. Terminating...\n");
				return 0;
			default:
				printf("There's no such option. Choose the one from available.\n");
				break;
		}	
	}
	return 0;
}
