//Access modifier Private
//Members are only accessible inside the class not outside the class

#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
        int health; // I can not use health outside the class
    public:
        char level;  //I can use level outside the class
};

int main(){
    Hero obj;
    obj.health = 100;
    obj.level = 'A';
    cout << obj.health << " " << obj.level;
    return 0;
}