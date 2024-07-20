// Insertion Sort
// Define First Element as Min Element
// Then Compare that with Entire Array and Find MIni
// Swao that Mini with Prealy Defined Min

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i; //0
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}