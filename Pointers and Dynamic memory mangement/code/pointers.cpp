#include <iostream>
#include "trial.h"
#include "circle.h"
#include "course.h"
using namespace std;

int* AddOne(int* Arr, int size)
    {
        for(int i=0; i<size; i++){ Arr[i]++;}
        return Arr;
    }
/*int* AddOne(int* arr, int size)
{
int* pArr = new int[size]; 
for(int i=0; i<size; i++){
pArr[i]=arr[i]+1;
}
return pArr;
}*/

int main(){
    int x=5;
    int* pNum=&x;
    *pNum=0;
    cout <<"x= "<<x<<endl;
    cout <<"&x= "<<&x<<endl;
    cout <<"pNum= "<<pNum<<endl;
    cout <<"*pNum= "<<*pNum<<endl;

    int a=8;
    int* pa=&a;
    int** ppa=&pa;
    cout<<"a= "<<a<<endl;
    cout<<"pa= "<<pa<<endl;
    cout<<"*pa= " << *pa <<endl;
    cout<<"ppa= "<<ppa <<endl;
    cout<<"*ppa= "<< *ppa<<endl;
    cout<<"**ppa= " << **ppa<<endl;

    int Arr[4]={0,1,2,3};
    cout<< Arr<<endl;
    cout<< *Arr<<endl;

    int* pNums=nullptr;
    pNums=new int;
    *pNums=5;
    cout<< *pNums<< endl;
    delete pNums;
    cout<< *pNums;

    trial t1;
    cout<<"object hasn't been destructed yet"<<endl;

    Circle c1(10);
    Circle c2(c1);
    cout<< c2.getRadius()<<endl;
    c1.setRadius(15);
    cout<< c1.getRadius()<<endl;
    cout<< c2.getRadius()<<endl;

    Circle* c3=new Circle;
    Circle* c4= c3;

    delete c3;
    cout<<c4->getRadius(); //invalid
    return 0;
}