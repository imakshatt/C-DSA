// Basic 1D Array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];

    arr[3] += 15;
    cout << endl
         << endl
         << arr[3];
    return 0;
}