#include "parent.h"

class child: public Parent
{
   public:
   child(){ cout<<"Child class called"<<endl;}
   ~child(){cout<<"Child class destructed"<<endl;}
};
