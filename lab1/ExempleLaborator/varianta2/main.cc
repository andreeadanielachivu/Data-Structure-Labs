#include <stdio.h>
#include "complex.h"

int main() {
	Complex number;
	number.re = 2;
	number.im = 4;
	printf("%.2lf %.2lf\n", number.re, number.im);

	return 0;
}
