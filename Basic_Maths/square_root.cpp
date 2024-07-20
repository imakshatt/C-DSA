#include <bits/stdc++.h>
using namespace std;

int findsqrt(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    int i = 1, result = 1;
    while (result <= n)
    {
        i++;
        result = i * i;
    }
    return i-1;
}

int main()
{
    int n;
    cin >> n;

    int result = findsqrt(n);
    cout << result;

    return 0;
}