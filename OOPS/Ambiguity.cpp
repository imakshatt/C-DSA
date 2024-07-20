//Occurs in Multiple Inheritance 
//When i have same function in class A and class B and that is inherited by c so Ambiguity Error occurs
//To resolve that we use scope resolution operator '::'

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void func(){
            cout << "Hello Class A" << endl;
        }
};
class B{
    public:
        void func(){
            cout << "Hello class B" << endl;
        }
};

class c:public A, public B{

};

int main(){
    c obj;
    // obj.func();
    obj.A::func();
    obj.B::func();
    return 0;
}