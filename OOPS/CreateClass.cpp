#include<bits/stdc++.h>
using namespace std;


class Myclass {         //Class
    public:             //Access Modifier
        int myNum;      //Attribute
        string myString;//Attribute
};

class car {
    public:
        string brand;
        string model;
        int year;
};

//Use Single Object
// int main(){
//     Myclass myobj;      //Create object of myclass
//     myobj.myNum = 10;   //use that object to get the values
//     myobj.myString = "Akshat";
//     cout << myobj.myNum << endl;
//     cout << myobj.myString;

//     return 0;
// }

//Multiple Object
int main(){
    //Create object-1 of car class
    car obj1;
    obj1.brand = "BMW";
    obj1.model = "gtx";
    obj1.year = 1999;

    cout << obj1.brand << " " << obj1.model << " " << obj1.year <<  endl;

    car obj2;
    obj2.brand = "Aulto";
    obj2.model = "basic";
    obj2.year = 2022;

    cout  << obj2.brand << " " << obj2.model << obj2.year << endl;
    return 0;
}