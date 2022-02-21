#pragma once
#include "father.h"
#include "mother.h"
using namespace std;

class child2: public Father,public Mother
{
   public:
   child2():Mother(),Father()
{ cout<<"Child class called"<<endl;}
   ~child2(){cout<<"Child class destructed"<<endl;}
};
