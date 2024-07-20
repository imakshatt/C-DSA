//shownig entire fibonaci without recursion

#include<bits/stdc++.h>
using namespace std;

void fib(int n){
    int a=0, b=1, c;
    cout << endl;
    cout << a << " " << b << " ";
    for(int i=2;i<n;i++){
        c = a + b;
        cout << c << " ";
        a=b;
        b=c;
    }
}

int main(){
    int n;
    cin >> n;

    fib(n);
    return 0;
}