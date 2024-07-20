//I have two class A and B so i use all the properties(objects, function) of class A to Class B that is known as I INHERIT THE CLASS A TO CLASS B
//Using three modes i achieve inheritance public, private, protected

//Public Inheritance
#include<bits/stdc++.h>
using namespace std;

//Paraent class / Super Class
class Human {
    public:
        int height;
        int weight;
        int Age;

    public:
        int getAge(){
            return Age;
        }
        void setAge(int Age){
            this->Age = Age;
        }
};

//Child Class / Subclass
class Male: public Human{
    public:
        string color;

        void sleep(){
            cout << "Sleep Function calling";
        }
};

int main(){
    Male object1;

    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.Age << endl;
    cout << object1.color << endl;

    object1.color = "White";
    object1.setAge(85);
    object1.height = 10;
    object1.weight = 45;

    cout << object1.color << " " << object1.getAge() << " " << object1.height << " " << object1.weight;
    return 0;
}