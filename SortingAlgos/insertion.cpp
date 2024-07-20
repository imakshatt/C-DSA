// Insertion Sort
//  Select Element and check it for Previous elements

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {4, 1, 9, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= n - 1; i++)
    {
        int j = i; //4
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}