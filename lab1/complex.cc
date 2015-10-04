#include "complex.h"
Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}
 
Complex::~Complex() {
}
 
Complex Complex::conjugate() {
    Complex conjugat(re, -im);
    return conjugat;
}
 
double Complex::getRe() {
    return re;
}
 
double Complex::getIm() {
    return im;
}

Complex Complex::adunare(Complex *nr){
    Complex suma(0, 0);
    suma.re = this->re + nr->re;
    suma.im = this->im + nr->im;
    return suma;
}

Complex* Complex::scadere(Complex *nr){
    Complex *dif = new Complex(0, 0);
    dif->re = this->re - nr->re;
    dif->im = this->im - nr->im;
    return dif;
}

Complex Complex::inmultire(Complex nr){
    Complex prod(0, 0);
    prod.re = this->re * nr.re - this->im * nr.im;
    prod.im = this->re * nr.im + this->im * nr.re;
    return prod;
}

