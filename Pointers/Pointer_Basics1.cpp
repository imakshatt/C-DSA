#include<bits/stdc++.h>

using namespace std;

int main(){
	int num = 5;

	cout << "Value of NUm is: ";
	cout << num << endl;

	cout << "Address of Num is: ";
	//address operator is &
	cout << &num << endl;

	//Referecing Operator and Dereferncing Operator
	//initialize a Pointer (here ptr is a pointer of int data type)
	int *ptr = &num;      //To store the address we use pointers
	
	//to print the value pointed by pointer we use derefercing operator
	
	cout << "Value of num is: " << *ptr << endl;
	cout << "Address of num is: " << ptr << endl;
	
	/*Pointer of Double type*/
	double d = 4.3;
	double *ptr1 = &d;

	cout << "Value of d is: " << *ptr1 << endl;
	cout << "Address of d is: " << ptr1 << endl;


	//Size of Pointer is always 8 bytes (For any data types)
	
	cout << "Size of num(int type) is: " << sizeof(num) << endl;
	cout << "Size of ptr(ptr is a pointer of int data type): " << sizeof(ptr) << endl;

	cout << "Size of d(double type) is: " << sizeof(d) << endl;
	cout << "Size of *ptr1(ptr1 is a pointer of double data type): " << sizeof(ptr1) << endl;


	/*Playing with Pointers*/

	cout << endl;
	cout << endl;

	int *p; /*Pointer to int is created, and pointing to some garbage address, BAD PRACTICE*/
	cout << *p << endl; /*Gives some garbage value*/
	cout << "Always initialize something when Pointer is created" << endl;

	/*Like if i want to intialize pointer with NULL value it gives segmentatio fauult*/

	//int *p1 = 0;
	//cout << "Value of p1: " << *p1 << endl; /*Here no value is pointed by pointer p1/
	

	//Another way to initialize pointer
	
	int *p2 = 0;
	p2 = &num;
	cout << "Value is : " << *p2 << endl;
	cout << "Address is: " << p2 << endl;

	cout << "------------------------------------------------" << endl;
	int *p3 = &num;
	cout << "Value of p3 before: " << *p3 << endl;
	(*p3)++;
	cout << "Value of p3 after: " << *p3 << endl;

	cout << "-------------------------------------------------" << endl;

	int NUM = 5;
	int a = NUM;
	cout << "a before: " << a << endl;
	a++;
	cout << "a after: " << a << endl;

	cout << "------------------------------------------------" << endl;

	//Copying a Pointer
	
	int n = 5;
	int *p4 = &n;
	int *q = p4; //copying a pointer
	
	cout << "Address of p4 " << p4 << "=" << " Address of q " << q << endl;
	cout << "Value of p4 " << *p4 << "=" << " Value of q " << *q << endl;

	
	return 0;
}
