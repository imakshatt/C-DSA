// If Else in c++
// write an program that takes an input of age
// and prints if you are adult or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an Adult";
    }
    else
    {
        cout << "You are not Adult";
    }
    return 0;
}