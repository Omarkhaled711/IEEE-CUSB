#include "Circle.h"
using namespace std;

Circle::Circle(){radius=1;}
Circle::Circle(double r){radius=r;}
Circle::Circle(double r, const string&c, bool fill){
       radius=r;
       setColor(c);  //Can't say color=c, as color is private in parent class
       setFilled(fill);// Can't say filled =fill for the same reason
   }
double Circle::getRadius() { return radius;}
void Circle::setRadius(double r){radius=r;}
string Circle::toString(){return "Circle";}
//double Circle::getArea(){return 3.14 * radius* radius;}
Circle::~Circle(){}

