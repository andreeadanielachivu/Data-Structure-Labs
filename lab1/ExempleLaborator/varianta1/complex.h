#ifndef __COMPLEX_H
#define __COMPLEX_H

struct complex {
	double re;
	double im;

//Initializeaza campurile unei structuri date.
void complex_initialize(double re, double im) {
	this->re = re;
	this->im = im;
}

//Intoarce o structura ce contine numarul complex conjugat.
struct complex complex_conjugat() {
	struct complex conjugate;
	conjugate.complex_initialize(this->re, -(this->im));
	return conjugate;
}
};

#endif
