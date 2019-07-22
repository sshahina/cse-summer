class Complex {
 public:
   Complex();
   Complex(float,float);
   float getReal();
   float getImag();
   void setReal(float);
   void setImag(float);
   void setComplex(float,float);
   float magnitude();
   void display();
   Complex add(Complex);
 private:
   float real;
   float imag;
};

