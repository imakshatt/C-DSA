//
// Created by AKSHAT on 10/8/2023.
//
//Print All Divisors of a number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout << i << " ";
        }
        else{
            continue;
        }
    }
    return 0;
}
