#include<bits/stdc++.h>

using namespace std;


void print(int *p){ /*Here Pointer bcz i pass the address in print function*/
	cout << *p << endl;
}

void update(int *p){
	/*I have to update the pointer value there are two cases*/
	/*1st that is wrong*/
	//p = p + 1; //1st
	//
	*p = *p + 1;
}
int main(){
	int value = 5;
	cout << "Printing the address of value: " << &value << endl;

	int *p = &value;
	cout << "Printing the value of pointer p: " << p << endl;
	cout << "Printing the value stored ar address p: " << *p << endl;


	/*Now pass the address of value in the function print()*/
	//print(p);
	cout << "Before *P: " << *p << endl;
       	update(p);
	cout << "After *P: " << *p << endl;	
	return 0;
}
