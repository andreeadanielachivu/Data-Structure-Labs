#include <stdio.h>
#include "complex.h"

int main() {
	Complex number1(2, 3);
	Complex number2(1, 5);
	Complex suma = number1.adunare(number2);
	Complex dif = number1.scadere(number2);
	Complex prod = number1.inmultire(number2);
	printf("Sum is:%.2lf + %.2lf*i\n", suma.getRe(), suma.getIm());
	printf("Dif is:%.2lf + %.2lf*i\n", dif.getRe(), dif.getIm());
	printf("Prod is:%.2lf + %.2lf*i\n", prod.getRe(), prod.getIm());
	return 0;
}
