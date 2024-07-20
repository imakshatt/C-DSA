//In this code we find that how many times given number appears in the array using hashing
//Input array size
//Array
//No of queries
//take the queries
//Number Hashing

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        //fetch that number
        cout << hash[number] << " ";
    }
    return 0;
}