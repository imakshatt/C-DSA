#include<bits/stdc++.h>

using namespace std;

int main(){
	/*First difference between int arrays and char arrays is the cout function*/

	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr[0];
	cout << "Output For int type arrays: ";
	cout << ptr << endl;
	
	char ch[5] = "abcd";
	char *c = &ch[0];
	cout << "Output for char type arrays: ";
	cout << c << endl;


	cout << "------------------------------------------------" << endl;
	
	/*Another example to demonstrate cout is diffent for both*/
	cout << "Output for int type arrays for cout<<arr: ";
	cout << arr << endl;
	cout << "Output for char type arrays for cout<<ch: ";
	cout << ch << endl;

	/*What if there is no NULL char to stop cout function while printing*/
	char temp = 'z';
	char *chp = &temp;
	cout << "It prints until it gets the NULL char: " << chp << endl;
}
