// circle.h
class Circle {
  public:
   Circle(); 
   Circle(float);
   ~Circle(); 
   void setRadius(float);
   float getRadius();
   float area();
   float circumf();
  private:
   float radius;
};

