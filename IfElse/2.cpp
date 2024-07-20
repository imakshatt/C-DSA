// School Grading System using IfElse

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "Fail";
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "E grade";
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "D grade";
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "C grade";
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "B grade";
    }
    else if (marks >= 80 && marks <= 100)
    {
        cout << "A grade";
    }
    else
    {
        cout << "invalid marks";
    }
    return 0;
}