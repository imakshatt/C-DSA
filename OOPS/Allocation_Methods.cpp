//To initialize constructor two methods are there
//1 Static Allocation
//2 Dynamic Allocation

#include<bits/stdc++.h>
using namespace std;

class Hero {
    private:
        int health;
    public:
        char level;
    
    //create getter and setter to access private elements
    //getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    //setter
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

};

int main(){
    //Static Allocation
    Hero a;
    cout << "Static Allication" << endl;
    a.setHealth(70);
    a.setLevel('A');
    cout << a.getHealth() << " " << a.getLevel();

    //Dynamic Allocation
    Hero *b = new Hero;
    cout << "Dynamic Allocation" << endl;

    //method-1 to access and print
    (*b).setHealth(90);
    (*b).setLevel('B');
    cout << (*b).getHealth() << " " << (*b).getLevel();

    //Method-2 to access and print
    cout << endl;
    b->setHealth(800);
    b->setLevel('C');
    cout << b->getHealth() << " " << b->getLevel();

    return 0;
}