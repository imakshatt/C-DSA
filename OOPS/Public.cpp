//Access Modifier - Public
//Members are accessible inside the class as well outside the class

#include<bits/stdc++.h>
using namespace std;

class Hero {
    public://Here access modifier is public so i can use health, level and method details outside the class as well
        int health;
        char level;
        void details(){
            cout << health << " " << level;
        }
};


int main(){
    Hero obj;
    obj.health = 100;  //Here outside the class i use the object health and do modification
    obj.level = 'A';
    obj.details();
    return 0;
}