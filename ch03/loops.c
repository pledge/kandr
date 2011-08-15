#include <stdio.h>

int main()
{
	int i = -1;

	/* loops are executed when the condition is non-zero
	 * so negatives still pas
	 */

	while (i) {
		printf("Entered the while loop\n");
		break;
	}


	for (;i < 10;) {
		printf("Entered the for loop\n");
		break;
	}

	for (int i = 0; i < 10; i++) {
		printf("Continue: %i\n", i);
		i = 12;
		continue;
	}

	return 0;
}
