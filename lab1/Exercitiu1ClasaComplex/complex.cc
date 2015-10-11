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
	Complex conjugat(re, -im);
	return conjugat;
}

Complex Complex::adunare(Complex nr) {
	Complex suma(this->re + nr.re, this->im + nr.im);
	return suma;
}

Complex Complex::scadere(Complex nr) {
	Complex diferenta(this->re - nr.re, this->im - nr.im);
	return diferenta;
}

Complex Complex::inmultire(Complex nr) {
	Complex produs(this->re * nr.re - this->im * nr.im, this->re * nr.im + this->im * nr.re);
	return produs;
}
