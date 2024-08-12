#include<bits/stdc++.h>

using namespace std;

int main(){
	/*int fv = 5;
	int sv = 15;
	char tv = 'c';

	int *p1 = &fv;
	int *p2 = &sv;
	char *p3 = &tv;
	
	cout << "Printing First Value Before: " << fv << endl;
	*p1 = 10;
	cout << "Printing First value After: " << fv << endl;
	
	cout << "Printing Second value Before: " << sv << endl;
	*p2 = *p1;
	cout << "Printing Second value After: " << sv << endl;
	
	cout << "Printing p2 Address: " << p2 << endl;
	cout << "Printing p1 address Before: " << p1 << endl;
	p1 = p2;
	cout << "Printing p1 address After: " << p1 << endl;

	cout << "P1 value before Change: " << *p1 << endl;
	*p1 = 20;
	cout << "P1 value after change: " << *p1 << endl;

	cout << "FV: " << fv << endl;
	cout << "Sv: " << sv << endl;
	cout << "TV: " << tv << endl;

	*/

	int arr[10];
	cout << "Address of arr oth index: " << &arr[0] << endl;
	int *ptr = &arr[0];
	cout << "Address of Pointer ptr: " << &ptr << endl;
	cout << "Address of ptr: " << ptr << endl;
	ptr = ptr + 1;
	//cout << &ptr << endl;
	cout << "Address of ptr after chnage: " << ptr << endl;





	return 0;
}
