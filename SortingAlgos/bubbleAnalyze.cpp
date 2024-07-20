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
// void printArray(int *arr, int n)
// {
//     for (int k = 0; k < n; k++)
//     {
//         cout << arr[k] << " ";
//     }
// }
void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 1; i <= 3; i++)
    {
        if (i == 1)
        {
            acending_array(arr, n);
            auto start = high_resolution_clock::now();
            bubblesort(arr, n);
            auto end = high_resolution_clock::now();

            duration<double> total_time = end - start;
            cout << endl
                 << "Total Time taken by Bubble sort for " << n << " elements in "
                 << "Acending Order is: " << total_time.count() << endl;
        }
        else if (i == 2)
        {
            decending_array(arr, n);
            auto start = high_resolution_clock::now();
            bubblesort(arr, n);
            auto end = high_resolution_clock::now();

            duration<double> total_time = end - start;
            cout << endl
                 << "Total Time taken by Bubble sort for " << n << " elements in "
                 << "Decending Order is: " << total_time.count() << endl;
        }
        else if (i == 3)
        {
            random_array(arr, n);
            auto start = high_resolution_clock::now();
            bubblesort(arr, n);
            auto end = high_resolution_clock::now();

            duration<double> total_time = end - start;
            cout << endl
                 << "Total Time taken by Bubble sort for " << n << " elements in "
                 << "Random Order is: " << total_time.count() << endl;
        }
    }
    return 0;
}