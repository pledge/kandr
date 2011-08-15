#include <stdio.h>

int main()
{
	int notinitialized;
	const int sticky = 43;

	printf("This value was not inititialized: %d\n", notinitialized);

	return 0;
}
