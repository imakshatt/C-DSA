//Given a signed 32 - bit integer x, return x with its digits reversed.If reversing x causes the value to go outside the signed 32 - bit integer range[-231, 231 - 1], then return 0.
//Assume the environment does not allow you to store 64 -bit integers(signed or unsigned).
//means i have to app;y rev_number logic if my number is less then integer range if my number is greater then interger range then return 0;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int rev_number = 0;
    //here i have to consider negative number also
    while(n != 0){
        int ld = n % 10;
        if((rev_number > INT_MAX/10) || (rev_number < INT_MAX/10)){
            return 0;
        }
        rev_number = (rev_number*10)+ld;
        n = n/10;
    }
    return rev_number;
}