// Finf Unioin of two arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> UnionOfArray(vector<int> &a, vector<int> &b, int n1, int n2){
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> result;
    for(auto it : st){
        result.push_back(it);
    }
    return result;
} 
vector<int> UnionOfArrayOptimal(vector<int> &a, vector<int> &b, int n1, int n2){
    int i=0;
    int j=0;
    vector<int> uniona;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(uniona.size()==0 || uniona.back()!=a[i]){
                uniona.push_back(a[i]);
            }
            i++;
        }
        else{
            if (uniona.size() == 0 || uniona.back() != b[j])
            {
                uniona.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if (uniona.size() == 0 || uniona.back() != a[i])
        {
            uniona.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if (uniona.size() == 0 || uniona.back() != b[j])
        {
            uniona.push_back(b[j]);
        }
        j++;
    }
    return uniona;
}
vector<int> IntersectionArr(vector<int> &a, vector<int> &b, int n1, int n2){
    int N = -1;
    if(n2<=n1){
        N=n1;
    }
    else{
        N=n2;
    }
    int i=0;
    int j=0;
    vector<int> result;
    while(i<N){
        if(a[i]==b[j]){
            result.push_back(a[i]);
            j++;
        }
        i++;
    }
    return result;
}
int main()
{
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        cin >> a[i];
    }
    for(int i=0;i<n2;i++){
        cin >> b[i];
    }
    vector<int> final = IntersectionArr(a, b, n1, n2);
    for(auto it : final){
        cout << it;
    }
    return 0;
}