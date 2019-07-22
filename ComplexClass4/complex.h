class Complex {
 friend ostream& operator<<(ostream &, Complex &);
 friend istream& operator>>(istream &, Complex &);
 public:
   Complex();
   Complex(float,float);
   float getReal();
   float getImag();
   void setReal(float);
   void setImag(float);
   void setComplex(float,float);
   float magnitude();
   Complex operator+(Complex);
   Complex operator*(Complex);
   Complex operator*(float);
 private:
   float real;
   float imag;
};

