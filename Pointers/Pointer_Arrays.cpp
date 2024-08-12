#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[10] = {73, 122, 41, 67};

	cout << "Address of first memory block is: " << arr << endl;
	cout << "Address of first memory block is (Another Method): " << &arr[0] << endl;

	cout << "Value of First memory position: " << *arr << endl;
	cout << "Incrementing the First value by one: " << *arr + 1 << endl;

	cout << "Printing the value of 1st index of an array: " << *(arr + 1) << endl;
	cout << "Another way to Increment first value by one: " << *(arr) + 1 << endl;

	cout << "Printing value of index 2: " << arr[2] << endl;
	cout << "Printing value of index 2 using *: " << *(arr + 2) << endl;

	cout << "--------------------------------------------------------" << endl;
	cout << "Another method to print the value of index 3" << endl;

	int i = 3;
	cout << "value of 3rd index: " << i[arr] << endl;
	cout << "Value of 3rd index: " << *(i + arr) << endl;


	cout << "-----------------------------------------------------" << endl;

	cout << "1st diffence between array and pointers" << endl;
	int temp[10];
	cout << "Size of an array temp is: " << sizeof(temp) << endl;
	cout << "Size of address of temp is: " << sizeof(&temp) << endl;

	int *ptr = &temp[0];
	cout << "Size of Pointer which points to first index of temp is: " << sizeof(ptr) << endl;
	cout << "1st: " << sizeof(*ptr) << endl;
	cout << "2nd: " << sizeof(&ptr) << endl;


	cout << "-----------------------------------------------------------" << endl;
	cout << "2nd difference between array and pointer" << endl;

	int a[10];
	cout << "Address of 0th index of a: " << &a[0] << endl;
	cout << "Another way to do it: " << &a << endl;
	cout << "Another way to do it: " << a << endl;

	int *p = &a[0];
	cout << "Address of Pointer P is: " << &p << endl;


	cout << "------------------------------------------------------------" << endl;
	cout << "3rd Difference" << endl;

	int t[10];
	cout << "Address of t is mapped in symbol table which is: " << t << endl;
	cout << "But we can not change that address it throws an error" << endl;
	//t = t + 1; Throws an error bcz we can not change the address once it stored in ST
	
	//But we can do it in Pointer
	
	int *q = &t[0];
	cout << "Address of oth index of t: " << t << endl;
	cout << "Address of Pointer q, which pointes to oth index of t: " << q << endl;
	q = q + 1;
	cout << "After change: " << q << endl;




	return 0;
}
