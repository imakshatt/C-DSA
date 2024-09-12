#include<bits/stdc++.h>

using namespace std;

void update(int** p2){
	//p2 = p2 + 1;
	//Will anythig change - NO
	

	//*p2 = *p2 + 1;
	//will anything change - YES
	

	**p2 = **p2 + 1;
	//will anything change - YES
}

int main(){
	int i = 5;
	int* p = &i;
	int **p2 = &p;

	cout << "Before" << endl;
	cout << i << endl;
	cout << p << endl;
	cout << p2 << endl;

	update(p2);

	cout << "After" << endl;
	cout << i << endl;
	cout << p << endl;
	cout << p2 << endl;

	return 0;
	
}
