// if age <18 --> Not eligible for job
// if age >= 18 and age <= 54 --> Elegibel for job
// if age >=55 and age <=57 --> Eligoble for job but retirement soon
// if age > 57 --> Retirement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not Eligible for Job";
    }
    else if (age <= 57)
    {
        if (age >= 55 && age <= 57)
        {
            cout << "Eligible for Job, But Retirement soon";
        }
        else
        {
            cout << "Eligible for Job";
        }
    }
    else
    {
        cout << "Retirement";
    }
    return 0;
}