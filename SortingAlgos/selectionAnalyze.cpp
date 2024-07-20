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
void selectionsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
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
    printArray(arr, n);
}

int main()
{
    int n = 100000;
    int *arr = new int[n];
    random_array(arr, n);

    auto start_time = high_resolution_clock::now();
    selectionsort(arr, n);
    auto end_time = high_resolution_clock::now();
    duration<double> time_taken = end_time - start_time;
    cout << "Time Taken By Insertion Sort is: " << time_taken.count() << endl;
    delete[] arr;
    return 0;
}