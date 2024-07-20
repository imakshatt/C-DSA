//reverse a number n=321 then o/p is 123
#include<bits/stdc++.h>
using namespace std;

int main(){
    //321
    int x;
    cin >> x;
    int rev_number = 0;

    while(x>0){
        int lst_digit = x%10;
        rev_number = (rev_number * 10) + lst_digit;
        x= x/10;
    }
    cout << rev_number;
}