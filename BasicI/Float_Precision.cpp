#include<bits/stdc++.h>
using namespace std;

int main(){
    float num1= 96;
    float num2 = 27;
    float result = num1 / num2;

    //Now i have to print the result with 3 decimal points in float
    //Here setprocision function is used
    cout << fixed << setprecision(3) << result;
    return 0; 
}