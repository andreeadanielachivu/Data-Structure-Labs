#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main() {
	//variabila locala de tip struct complex
	struct complex number;
	number.re = 0;
	number.im = 1;
	printf("Valorile numarului complex: %lf %lf \n", number.re, number.im);

	//variabila de tip pointer, catre o zona de memorie alocata dinamic
	struct complex *pNumber = (struct complex *)malloc(sizeof(struct complex));
	printf("Dimensiunea structurii: %d\n", sizeof(struct complex));
	printf("Dimensiunea unui double: %d\n", sizeof(double));
	pNumber->re = 1;
	pNumber->im = 0;
	printf("Valorile numarului complex: %lf %lf \n", pNumber->re, pNumber->im);
	free(pNumber);
	number.complex_initialize(2, 3);
	printf("%.2lf %.2lf\n", number.re, number.im);
	struct complex conj = number.complex_conjugat();
	printf("%.2lf %.2lf\n", conj.re, conj.im);
	return 0;
}
