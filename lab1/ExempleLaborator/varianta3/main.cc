#include <stdio.h>
#include "complex.h"

int main() {
	Complex number(2, 3);
	printf("%lf %lf \n", number.getRe(), number.getIm());

	return 0;
}
