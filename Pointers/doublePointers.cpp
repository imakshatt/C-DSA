#include<bits/stdc++.h>

using namespace std;

int main(){
	int i = 5;
	int* ptr = &i;
	int** ptr1 = &ptr;


	cout << "Address of i: " << &i << endl;
	cout << "Address of ptr: " << &ptr << endl;
	cout << "Address of ptr1: " << &ptr1 << endl;

	cout << "Value of ptr = Address of i: " << ptr << endl;
	cout << "Value of ptr1 = Address of ptr: " << ptr1 << endl;

	cout << "Three different ways to print value of i" << endl;
	cout << "1st way: " << i << endl;
	cout << "2nd way: " << *ptr << endl;
	cout << "3rd way: " << **ptr1 << endl;	
	
	cout << endl;

	cout << "Three different ways to print value of ptr" << endl;
	cout << "1st way: " << &i << endl;
	cout << "2nd way: " << ptr << endl;
	cout << "3rd way: " << *ptr1 << endl;

	cout << endl;
	cout << "Two ways to print value of ptr1" << endl;
	cout << "1st way: " << &ptr << endl;
	cout << "2nd way: " << ptr1 << endl;

	cout << endl;


	return 0;
}
