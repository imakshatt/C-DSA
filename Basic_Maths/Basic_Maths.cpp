//DIGIT CONCEPT
//if i have Number N = 7789 and i have to saperate the number then 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n>0){
        int lastdigit = n % 10;
        cout << lastdigit << endl;
        n = n/10;
    }
    return 0;
}