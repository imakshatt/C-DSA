//Optimal Solution to rorate an array by k places
#include<bits/stdc++.h>
using namespace std;

void LeftRotate(vector<int> &arr, int n, int k){
    k=k%n;
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.begin()+n);
    reverse(arr.begin(), arr.begin()+n);
}
void RightRotate(vector<int> &arr, int n, int k){
    k=k%10;
    reverse(arr.begin(),arr.begin()+(n-k));
    reverse(arr.begin()+(n-k), arr.begin()+n);
    reverse(arr.begin(), arr.begin()+n);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    LeftRotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    return 0;
}