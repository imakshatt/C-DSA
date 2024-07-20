//MultiLevel Inheritance
//For example dog inherits the propery of Class Animal and Class germenshaperd inherits the property of class dog

#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
        int Age;
        int Weight;
    public:
        void Bark(){
            cout << "barking" << endl;
        }
};

class dog:public Animal{
    public:
        void dogBarking(){
            cout << "Dog is Barking";
        }
};

class germenshapered:public dog{
    public:
        void geremenshaperedBarking(){
            cout << "geremenshaperedBarking is Barking";
        }
};

int main(){
    germenshapered g1;
    g1.geremenshaperedBarking();
    return 0;
}