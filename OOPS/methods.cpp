// Methods are the function inside the class.
// Two ways to define function one is Inside class and another is outside the class.

#include<bits/stdc++.h>
using namespace std;

//Inside the class method.
class Myclass {
    public:
        void myMethod(){     //method
            cout << "Hello Word";
        }
};

//outside the class method
class car {
    public:
     void mymethod();
};
void car::mymethod(){
    cout << "this is break";
}


int main(){
    car myobj;
    myobj.mymethod();
    return 0;
}