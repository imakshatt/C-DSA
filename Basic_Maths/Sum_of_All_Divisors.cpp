//
// Created by AKSHAT on 10/8/2023.
//
#include<bits/stdc++.h>
using namespace  std;

int sumOfAllDivisors(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%j==0){
                sum = sum + j;
            }
        }
    }
    return sum;
    return 0;
}
int main(){
    int n;
    cin >> n;
    int result = sumOfAllDivisors(n);
    cout << result;
    return 0;
}
