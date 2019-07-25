class Pump {
 public:
   Pump(float, float);
   float getGallons();
   float getPrice();
   void setGallons(float);
   void setPrice(float);
   void setPump(float,float);
   void showvalues();
   void request(float);
 private:
   float gallons;
   float price;
};

