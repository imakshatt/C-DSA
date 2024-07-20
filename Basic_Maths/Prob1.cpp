// you are given a number 'n' find the number of digit of 'n' that evenly divide 'n'

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    int num = n;
    while (num > 0)
    {
        int last_digit = num % 10;
        if (last_digit != 0)
        {
            if (n % last_digit == 0)
            {
                count++;
            }
        }
        num = num/10;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int result = countDigits(n);
    cout << result;
    return 0;
}