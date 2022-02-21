#include <bits/stdc++.h>
#include "Circle.h"
#include "child.h"
#include "child2.h"
#include "artistStudent.h"
using namespace std;

void displayColor(const Shape& x){
    cout<< x.getColor();
}

void ShapeName(Shape& x){
    cout<< x.toString()<<endl;
}
void LargerArea( const Shape& x, const Shape& y){
   //cout<< max(x.getArea(),y.getArea())<<endl;
}


int main(){

    child y;

    Shape s1;
    Circle c1;
    cout<<s1.toString()<<endl;
    cout<<c1.toString()<<endl;

    Circle c2;
    cout<<c2.Shape::toString()<<endl;

    Circle c3;
    displayColor(c3);
    
    Shape s2;
    ShapeName(s2);
    Circle c4;
    ShapeName(c4);
    
/* Shape* pShapeArr[]={new Circle,
    new Rectangle,
    new Triangle};

   //do some operations on the Array
   */

   Parent* ptr=new child;
   delete ptr;

   /* 
   Circle c(7);
   Rectangle r(5,4);
   LargerArea(c,r); */ 
    
    child2 z;

    ArtistStudent obj;
    cout<<obj.Major<<endl;
    cout<<obj.numberOfPaints<<endl;
    cout<<obj.student::Name<<endl;
    
    cout<<obj.Name<<endl;

    student* ptr_obj= new ArtistStudent;
    cout<<ptr_obj->Major<<endl;
    //cout<<ptr_obj->numberOfPaints<<endl;
    cout<<ptr_obj->Name<<endl;
    return 0;
}