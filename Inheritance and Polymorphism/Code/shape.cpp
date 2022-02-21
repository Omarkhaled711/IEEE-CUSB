#include "shape.h"
using namespace std;

Shape::Shape(){
       color="Red";
       filled=false;
   }
Shape::Shape(const string& c, bool fill ){
       color=c;
       filled=fill;
   }
   string Shape::getColor() const {return color;}
   void Shape::setColor(const string& c) {color=c;}
   bool Shape::isFilled() {return filled;}
   void Shape::setFilled(bool fill) {filled=fill;}
   string Shape::toString() {return "Shape";}
   Shape::~Shape(){}

