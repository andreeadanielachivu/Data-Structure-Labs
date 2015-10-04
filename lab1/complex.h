class Complex {
public:
    // Constructor
    Complex(double re, double im);
 
    // Destructor
    ~Complex();
 
    double getRe();
    double getIm();
 
    Complex conjugate(); 
    //adunare
    Complex adunare(Complex *nr);
    //scadere
    Complex* scadere(Complex *nr);
    //inmultire
    Complex inmultire(Complex nr);
 
private:
    double re;
    double im;
};