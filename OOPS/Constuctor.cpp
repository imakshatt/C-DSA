//Special method that is automatically called when an object of class is created
//So how internally happens

#include<bits/stdc++.h>
using namespace std;


class Hero{
    public:
        int health;
        int level;

        // Default constrctor because we manually created this
        Hero()
        {
            cout << "Constructor is called" << endl;
        }
};

int main(){
    Hero obj;  //here automatically constructor is created How it looks like obj.Hero()

    //Now Hero() is a constructoe that is autmaically created when we written the class
    //Constructor has no return type
    //Constructor has no input parameters
    cout << obj.health << " " << obj.level;
    return 0;
}