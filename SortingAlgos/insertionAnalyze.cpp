#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void random_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100000;
    }
}

void printArray(int *arr, int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}

void insertionsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    printArray(arr, n);
}

int main()
{
    int n = 100000;
    int *arr = new int[n];
    random_array(arr, n);

    auto start_time = high_resolution_clock::now();
    insertionsort(arr, n);
    auto end_time = high_resolution_clock::now();
    duration<double> time_taken = end_time - start_time;
    cout << "time taken by insertion sort is: " << time_taken.count() << endl;
    delete[] arr;
    return 0;
}