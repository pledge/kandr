#include <stdio.h>
#include <limits.h>


int main()
{
	printf("The range of int is from %d to %d\n", INT_MIN, INT_MAX);
	printf("The range of long is from %ld to %ld\n", LONG_MIN, LONG_MAX);

	printf("The size of a char is %d.  The range is from %d to %d\n", CHAR_BIT, CHAR_MIN, CHAR_MAX);

	printf("Largest unsigned int is %d\n", UINT_MAX);
	printf("Largest unsigned long is %lu\n", ULONG_MAX);

	return 0;
}
