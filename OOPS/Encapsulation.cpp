//Wrapping the data members and methods into one entity called as class that is known as encapsulation
//My all data members are in private modifier then that is known as Fully Encapsulation

#include<bits/stdc++.h>
using namespace std;

//Here i achieve the encapuslation
class Student{
    private:
        string name;
        int rollNo;
        int age;
    
    public:
        //Getter and setter for Name
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        //getter and setter for rollNo
        int getRollno(){
            return rollNo;
        }
        void setRollno(int rollNo){
            this->rollNo = rollNo;
        }
        //getter and setter dor Age
        int getAge(){
            return age;
        }
        void setAge(int age){
            this->age = age;
        }
};

int main(){
    Student s1;

    s1.setName("Akshat");
    s1.setRollno(1);
    s1.setAge(20);

    cout << s1.getName() << " " << s1.getRollno() << " " << s1.getAge();
    return 0; 

}