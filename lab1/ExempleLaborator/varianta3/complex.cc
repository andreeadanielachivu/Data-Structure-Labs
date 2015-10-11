#include "complex.h"
Complex::Complex(double re, double im) {
	this->re = re;
	this->im = im;
}

Complex::~Complex() {
}

double Complex::getRe() {
	return re;
}

double Complex::getIm() {
	return im;
}

Complex Complex::conjugate() {
	return Complex(this->re, -(this->im));
}
