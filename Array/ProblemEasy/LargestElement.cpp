// Find the largest element from an array
#include <bits/stdc++.h>
using namespace std;

int LargestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int SmallestElement(vector<int> &arr, int n)
{
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largestElement = LargestElement(arr, n);
    int smallestElement = SmallestElement(arr, n);
    cout << largestElement << " " << smallestElement;
    return 0;
}