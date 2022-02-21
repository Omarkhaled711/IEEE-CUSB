#pragma once
#include "shape.h"
class Circle: public Shape{
   private:
   double radius;
   public:
   Circle();
   Circle(double r);
   Circle(double r, const std::string&c, bool fill);
   double getRadius() ;
   void setRadius(double r);
   std::string toString();
   //double getArea();
   ~Circle();
};
