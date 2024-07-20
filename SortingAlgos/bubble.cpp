// Bubble Sort
#include <bits/stdc++.h>
#include <random>
#include <iostream>
using namespace std;
using namespace std::chrono;

void acending_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
}
void descending_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i - 1;
    }
}
void random_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the type of array you want to give as input: ";
    int type;
    cin >> type;
    if(type = 1){
        acending_array(n, arr);
    }
    else if(type == 2){
        
    }
    int len = sizeof(arr) / sizeof(arr[0]);
    auto start = high_resolution_clock::now();
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    auto end = high_resolution_clock::now();
    duration<double> time_taken = end - start;
    cout << "time taken by an algo: " << time_taken.count() << endl;
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}