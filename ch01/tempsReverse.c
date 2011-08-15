#include <stdio.h>

int main() {
	
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	printf("%3s %6s\n", "C", "F");
	
	celcius = lower;
	while (celcius <= upper) {
		fahr = (9.0/5.0) * celcius + 32.0;
		printf("%3.0f %6.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
	
	return 0;
}
