class Rational {
 public:
   Rational();
   Rational(int,int);
   int getNumer();
   int getDenom();
   void setNumer(int);
   void setDenom(int);
   void setRational(int,int);
   void display();
   Rational operator+(Rational);
 private:
   int numer;
   int denom;
};

