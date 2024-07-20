//Hashing using map 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

// Pre Calculation
    map<int,int> hash;   //unorder_map<int, int> mpp;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;   //adjust according to the problem statement
    }
    int q;
    cin >> q;
    while(q--){
        int value;
        cin >> value;
        //fetch
        cout << hash[value] << " ";
    }
}