#include <stdio.h>
#include "complex.h"
 
int main() {

	Complex *number = new Complex(2, 3);
    printf("%.2lf %.2lf\n", number->getRe(), number->getIm());
    Complex *nr = new Complex(5, 6);
 	printf("%.2lf %.2lf\n", nr->getRe(), nr->getIm());
 	//adunarea
 	printf("the sum\n");
 	Complex sum = number->adunare(nr);
 	printf("%.2lf %.2lf\n", sum.getRe(), sum.getIm());
 	//scaderea
 	Complex *dif = number->scadere(nr);
 	printf("the difference\n");
 	printf("%.2lf %.2lf\n", dif->getRe(), dif->getIm());
 	Complex nr_1(1, 5);
 	Complex nr_2(-2, 3);
 	Complex prod = nr_1.inmultire(nr_2);
 	printf("multiplex\n");
 	printf("%.2lf %.2lf\n", prod.getRe(), prod.getIm());
    return 0;
}

