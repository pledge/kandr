#include <stdio.h>

int main()
{

	int c = 10;

	switch (c) {
		/* default can be put before conditionals
		 * so missing a break on default can lead to bugs
		 * due to fall through
		 */
		default :
			printf("c was something else\n");
		case 0 : 
			printf("c was 0\n");
			break;
		case 1 :
			printf("c was 1\n");
			break;
	}
	return 0;
}
