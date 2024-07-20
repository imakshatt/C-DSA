//Move Zeros to the end of an array
#include<bits/stdc++.h>
using namespace std;

void MoveZerosToEnd(vector<int> &arr, int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
}
void MoveZeroToEndOptimal(vector<int> &arr, int n){
    //First step is i have to find the first zero element
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    //Now i have to use two pointer approch j is my first zero and traverse throough j+1 to n
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    MoveZeroToEndOptimal(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    return 0;
}