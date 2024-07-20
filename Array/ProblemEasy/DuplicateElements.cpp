// remove all duplicate elements from an array and return the modified array size

// BruteForce Approch
#include <bits/stdc++.h>
using namespace std;

int DuplicateElements(vector<int> &arr, int n)
{
    set<int> st; // Set Stores the Uniques value
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    // Now i have to traverse through the set
    int index = 0;
    for (auto it : st)
    {
        arr[index] = it;
        index++;
    }
    return index;
}
int OptimalSolution(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return (i + 1);
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
    int sizeofarry = DuplicateElements(arr, n);
    int ss = OptimalSolution(arr, n);
    cout << ss << " ";
    return 0;
}

// Optimal Solution
