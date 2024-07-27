#include <iostream>
using namespace std;
class Base
{
    public:
    virtual void iam() { cout<<"Base \n";}
};
class D1:public Base
{

public:
   virtual void iam(){
    cout<<"D1 \n";
   }

};
class D2:public Base
{

public:
   virtual void iam(){
    cout<<"D2 \n";
   }

};
int main(){
    Base *bPtr1 ;
    Base *bPtr2 ;
    D1 d1;
    D2 d2;
    bPtr1 = &d1;
    bPtr1 ->iam();
    bPtr2 = &d2;
    bPtr2 ->iam();
}