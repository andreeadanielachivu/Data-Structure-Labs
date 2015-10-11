class Complex {
public:
	//constructor
	Complex(double re, double im);
	//Destructor
	~Complex();
	
	double getRe();
	double getIm();
	
	Complex conjugate();

	Complex adunare(Complex nr);
	Complex scadere(Complex nr);
	Complex inmultire(Complex nr);

private:
	double re;
	double im;
};
