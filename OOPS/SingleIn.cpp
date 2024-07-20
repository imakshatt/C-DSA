//Single Level Inharitance

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int weight;
        int Age;
    public:
        void Bark(){
            cout << "barking.." << endl;
        }
};

class dog:public Animal{ //Single level inheritance Dog inherits the animal publically
    public:
        void dogBarking(){
            cout << "Dog is barking"  << endl;
        }
};

int main(){
    dog d1;
    d1.Bark();
    return 0;
}