// SwitchCase

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "MOnday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wen";
        break;
    case 4:
        cout << "Thuresday";
        break;
    case 5:
        cout << "Frieday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid Number";
    }
    return 0;
}