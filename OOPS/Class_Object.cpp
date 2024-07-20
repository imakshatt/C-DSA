//Basic Example of Class and Objects
#include<bits/stdc++.h>
// #include "Hero.cpp";
using namespace std;

//topic-1: create one class named Hero
class Hero {
    //class has some properties
    int health;
};

int main(){
    //Here i make object of that class
    Hero h1;
    cout << "Size of Class: " << sizeof(h1);
    return 0;
}