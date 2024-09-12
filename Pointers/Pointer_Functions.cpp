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

int getsum(int arr[], int n){ /*Here not entire array is passed just address of first block is passed*/
	/*That is the reason that size of array here is gives 8 BYtes bcz it it address of first block*/
	cout << endl << "Size of array that is passed in getsum() is: " << sizeof(arr) << endl;
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
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

	cout << "----------------------------------------------------" << endl;

	int arr[5] = {1,2,3,4,5};
	cout << endl << "Sum of entire array: " << getsum(arr, 5) << endl;
	//
	//Now i want to pass only last 3 memory blocks not entire arrray then
	
	cout << endl << "Sum of last 3 blocks: " << getsum(arr+2, 3) << endl;

	return 0;
}
