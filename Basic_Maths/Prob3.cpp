// Check Number is Palindrom or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int rev_number = 0;
    while (n != 0)
    {
        int ld = n % 10;
        rev_number = (rev_number * 10) + ld;
        n = n / 10;
    }
    if (temp == rev_number)
    {
        cout << "Given Number is Palindrom";
    }
    else
    {
        cout << "Given Number is Not a Palindrom";
    }
    return 0;
}