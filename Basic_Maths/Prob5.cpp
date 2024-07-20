//Armstrong Number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = n;
    int temp1 = n;
    int sum = 0;
    int k=0;

    //to get order
    while(n!=0){
        k++;
        int ld = n%10;
        n = n/10;
    }
    while(temp1!=0){
        sum += pow((temp1%10), k);
        temp1 = temp1/10;
    }
    if(temp == sum){
        cout << "Armstrong";
    }
    else{
        cout << "Not Armstrong";
    }
    return 0;
}