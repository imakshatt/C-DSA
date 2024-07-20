//Used in parameterized constructor when i confused between objects
//this keyword stores the address of current object

#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
        int health;
    public:
        char level;

    //create one parameterized constructor
    Hero(int health){
        // health = health;   Now i'm confused between this two objects first health is private member health so that is current objects health
        //this keyword stores the address of current object
        cout << "Address of this->" << this << endl;
        this->health = health; 
        //this->health is obj's health constructor
        //health is parameter health     
    }  


    int gethealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    Hero obj(100);
    cout << "Address of obj: " << &obj << endl;
    cout << obj.gethealth();
    return 0;
}