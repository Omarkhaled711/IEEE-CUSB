#pragma once
#include <string>
class Shape{
   private:
   std::string color;
   bool filled;

   public:
   Shape();
   Shape(const std::string& c, bool fill );
   std::string getColor() const; 
   void setColor(const std::string& c);
   bool isFilled();
   void setFilled(bool fill);
   virtual std::string toString();
   //virtual double getArea()=0;
   virtual ~Shape();
};
