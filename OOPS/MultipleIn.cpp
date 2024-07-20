//Multiple Inheritance means suppose Three class A, B, C
//So class c inherits the class A and class B both that is known as multiple inheritance

#include<bits/stdc++.h>
using namespace std;


class Animal{
    public:
        void Bark(){
            cout << "Barking" << endl;
        }
};

class Human{
    public:
        void Speak(){
            cout << "Speaking" << endl;
        }
};

class Hybrid:public Animal, public Human{

};
int main(){
    Hybrid obj;
    obj.Bark();
    return 0;
}