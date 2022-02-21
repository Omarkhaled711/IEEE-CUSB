#include <iostream>
using namespace std;
class Parent{
   public:
   Parent(){cout<<"Parent class called"<<endl;}
   virtual ~Parent(){cout<<"Parent class destructed"<<endl;}
};
