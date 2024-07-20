//Character Hashing
//given one string define how many times character occurs
//For Lower Characters
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     //preComputation
//     int hash[26] = {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         char ch;
//         cin >> ch;
//         //fetch
//         cout << hash[ch - 'a'] << " ";
//     }
//     return 0;
// }

// For Upper Character
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     //PreCalculation
//     int hash[26] = {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i] - 'A'];
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         char ch;
//         cin >> ch;
//         //fetch
//         cout << hash[ch-'A'] << " ";
//     }
//     return 0;
// }


//For All characters
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    //PreCalculation
    int hash[256] = {0};   //Because there are total 256 characters
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //fetch
        cout << hash[ch] << " ";
    }
    return  0;
}