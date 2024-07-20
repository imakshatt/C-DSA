//Here in private.cpp i can not use the private member that is health so using getter and setter i can use that.

#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
        int health;
    public:
        char level;
    
    int getHealth(){ //Create getter to fetch value
        return health;
    }
    char getLevel(){ //Create getter for level
        return level;
    }

    void setHealth(int h){ //Create setter to set the value of health
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    Hero obj;

    cout << "Health before setter: " << obj.getHealth() << endl;

    //Now i set the health using setter that i created
    obj.setHealth(70);

    cout << "Health after setter: " << obj.getHealth();
    return 0;
}