//Rotate Array by D places

#include<bits/stdc++.h>
using namespace std;

vector<int> LeftRotate(vector<int> &a, int n, int d){
    d = d%n;
    //Putting first d element into templ array
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(a[i]);
    }

    //Shifting
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }

    //Now Putting back temp
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int d;
    cin >> d;
    LeftRotate(a, n, d);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}
