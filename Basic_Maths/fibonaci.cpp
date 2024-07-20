#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    //base condition
    if(n==1 || n==0){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cin >> n;

    int result = fib(n);
    cout << result;
    return 0;
}