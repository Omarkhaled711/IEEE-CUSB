#include <iostream>
using namespace std;

class trial{
private:
int* num;
public:
trial(){
    num=new int;
    *num=5;
    cout<<"This is the constructor,*num= "<<*num<<endl;
}
~trial(){
    cout<<"this is the destructor, *num was equal to "<<*num<<endl;
    delete num;
    cout<<"*num is equal to "<<*num;
}
};