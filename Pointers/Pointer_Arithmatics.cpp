#include<bits/stdc++.h>

using namespace std;

int main(){
	int i = 3;

	//Intitializing Pointer
	int *t = &i;

	cout << (*t)++ << endl; /*Here value stored at address t increments by 1*/

	//same i can do using another way
	*t = *t + 1;
	cout << *t << endl;

	/*What if i do t = t+1 because t stores the address of i and i is int type which takes 4 bytes so it 
	 * actually Increment by 4 because t already takes 4 bytes so if t is stored at 100 then <104 bytes are
	 * taken so now t should be 104 if i perform t = t + 1 
	*/
	
	cout << "Address of t before Increment: " << t << endl;
	t = t + 1;
	cout << "Address Increments by 4 bytes: " << t << endl;

	return 0;
}
