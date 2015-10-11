class Complex {
public:
	//constructor
	Complex(double re, double im);
	//destructor
	~Complex();

	double getRe();
	double getIm();

	Complex conjugate();

private:
	double re;
	double im;
};
