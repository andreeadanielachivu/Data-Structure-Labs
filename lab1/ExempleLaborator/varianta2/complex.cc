#include "complex.h"
Complex Complex::conjugate() {
	Complex conjugate;
	conjugate.re = this->re;
	conjugate.im = -(this->im);

	return conjugate;
}
