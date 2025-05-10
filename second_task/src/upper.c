#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "format.h"

void upper(char *string) {
	int len = strlen(string);

	for (int i = 0; i < len; i++) {
		string[i] = toupper(string[i]);
	}

	// Printing formatted string
	printf("Formatted string - %s \n\n", string);

}

