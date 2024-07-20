// #include <bits/stdc++.h>
// using namespace std;
// using namespace std::chrono;

// void random_array(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = rand() % n;
//     }
// }
// void acending_array(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = i;
//     }
// }
// void decending_array(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = n - i - 1;
//     }
// }

// int part(vector<int> &arr, int low, int high)
// {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;
//     if (high <= low || low >= high)
//     {
//         return low + 1;
//     }
//     while (i < j)
//     {
//         while (arr[i] <= pivot && i <= high - 1)
//         {
//             i++;
//         }
//         while (arr[j] > pivot && j >= low + 1)
//         {
//             j--;
//         }
//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }

// void qs(vector<int> &arr, int low, int high)
// {
//     if (low < high)
//     {
//         int pIndex = part(arr, low, high);
//         qs(arr, low, pIndex - 1);
//         qs(arr, pIndex + 1, high);
//     }
// }
// vector<int> quicksort(vector<int> arr, int n)
// {
//     qs(arr, 0, arr.size() - 1);
//     return arr;
// }
// void quicksort_a(vector<int> &arr, int n)
// {
//     acending_array(arr, n);
//     // shuffle(arr.begin(), arr.end(), mt19937());
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
//     auto start = high_resolution_clock::now();
//     quicksort(arr, n);
//     auto end = high_resolution_clock::now();

//     duration<double> total_time = end - start;
//     cout << endl
//          << "Total Time taken by Quick sort for " << n << " elements in "
//          << "Acending Order is: " << total_time.count() << endl;
// }
// void quicksort_d(vector<int> &arr, int n)
// {
//     decending_array(arr, n);
//     // shuffle(arr.begin(), arr.end(), mt19937());
//     auto start = high_resolution_clock::now();
//     quicksort(arr, n);
//     auto end = high_resolution_clock::now();

//     duration<double> total_time = end - start;
//     cout << endl
//          << "Total Time taken by Quick sort for " << n << " elements in "
//          << "Decending Order is: " << total_time.count() << endl;
// }
// void quicksort_r(vector<int> &arr, int n)
// {
//     random_array(arr, n);
//     // shuffle(arr.begin(), arr.end(), mt19937());
//     auto start = high_resolution_clock::now();
//     quicksort(arr, n);
//     auto end = high_resolution_clock::now();

//     duration<double> total_time = end - start;
//     cout << endl
//          << "Total Time taken by Quick sort for " << n << " elements in "
//          << "Random Order is: " << total_time.count() << endl;

// int main()
// {
//     char *ps = (char *)_alloca(1024 * 30);
//     int n;
//     cout << "Enter the array size: ";
//     cin >> n;
//     vector<int> arr(n);

//     //
//     for (int i = 0; i < 3; i++)
//     {
//         if (i == 0)
//         {
//             quicksort_a(arr, n);
//         }
//         else if (i == 1)
//         {
//             quicksort_d(arr, n);
//         }
//         else if (i == 2)
//         {
//             quicksort_r(arr, n);
//         }
//     }
//     return 0;
// }