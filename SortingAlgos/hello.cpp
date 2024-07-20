#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
void random_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
    }
}
void acending_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
}
void decending_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i - 1;
    }
}
int part(vector<int> array, int start, int end)
{
    int pivot = array[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (array[i] <= pivot && i <= end - 1)
        {
            i++;
        }
        while (array[j] >= pivot && j >= start + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(array[i], array[j]);
        }
    }
    swap(array[start], array[j]);
    return j;
}
void qs(vector<int> array, int start, int end)
{
    if (start < end)
    {
        int partition_index = part(array, start, end);
        qs(array, start, partition_index - 1);
        qs(array, partition_index + 1, end);
    }
}

vector<int> quicksort(vector<int> array, int n)
{
    qs(array, 0, n - 1);
    return array;
}

void quicksort_a(int *arr, int n)
{
    vector<int> array;
    acending_array(arr, n);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        array.push_back(arr[i]);
    }
    shuffle(array.begin(), array.end(), mt19937());
    auto start = high_resolution_clock::now();
    quicksort(array, n);
    auto end = high_resolution_clock::now();

    duration<double> total_time = end - start;
    cout << endl
         << "Total Time taken by quicksort sort for " << n << " elements in "
         << "Acending Order is: " << total_time.count() << endl;
}
void quicksort_d(int *arr, int n)
{
    vector<int> array;
    decending_array(arr, n);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        array.push_back(arr[i]);
    }
    shuffle(array.begin(), array.end(), mt19937());
    auto start = high_resolution_clock::now();
    quicksort(array, n);
    auto end = high_resolution_clock::now();

    duration<double> total_time = end - start;
    cout << endl
         << "Total Time taken by quicksort sort for " << n << " elements in "
         << "decending Order is: " << total_time.count() << endl;
}
void quicksort_r(int *arr, int n)
{
    vector<int> array;
    random_array(arr, n);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        array.push_back(arr[i]);
    }
    shuffle(array.begin(), array.end(), mt19937());
    auto start = high_resolution_clock::now();
    quicksort(array, n);
    auto end = high_resolution_clock::now();

    duration<double> total_time = end - start;
    cout << endl
         << "Total Time taken by quick sort for " << n << " elements in "
         << "random Order is: " << total_time.count() << endl;
}
int main()
{
    int n;
    cout << "Enter the Array Size: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 1; i <= 3; i++)
    {
        if (i == 1)
        {
            quicksort_a(arr, n);
        }
        else if (i == 2)
        {
            quicksort_d(arr, n);
        }
        else if (i == 3)
        {
            quicksort_r(arr, n);
        }
    }
    return 0;
}