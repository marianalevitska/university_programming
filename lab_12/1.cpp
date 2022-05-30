// сортування по шелу лаба 12
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int *SortShell(int *arr, int n)
{
    int step = n / 2; // не обов’язково!
    while (step > 0)
    {
        for (int i = 0; i < n - step; i++)
        {
            int j = i;
            while (j >= 0 && arr[j] > arr[j + step])
            {
                int t = arr[j];
                arr[j] = arr[j + step];
                arr[j + step] = t;
                j--;
            }
        }
        step /= 2;
    }
    cout << "Shell sort " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    return arr;
}

void printArray(int *arr, int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
int binarySearch(int *arr, int key, int n, int l, int r)
{
    while (r - 1 > 1)
    {
        int mid = (l + r) / 2;

        if (arr[mid] < key)
            l = mid;
        else
            r = mid;
    }
    for (int i = l; i <= r; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int LinearSearch(int *arr, int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int n = 100, i = 0, q, r = n - 1, l = 0, index = 0;
    int key;
    int *arr = new int[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = (rand() % 600000) - 1000;
    }
    printArray(arr, n);

    for (i = 0; i < 10; i++)
    {
        chrono::duration<double> time1;
        auto start1 = chrono::steady_clock::now();
        arr = SortShell(arr, n);
        auto end1 = chrono::steady_clock::now();
        time1 = end1 - start1;
        cout << endl;
        cout << "Time: " << time1.count() << endl;
        cout << endl;
    }

    cout << "Enter key: ";
    cin >> key;
    cout << "Lineare search: " << endl;
    chrono::duration<double> time2;
    auto start2 = chrono::steady_clock::now();
    index = LinearSearch(arr, key, n);
    if (index >= 0)
        cout << "Key " << key << " found at index " << index << endl;
    else
        cout << "Key not found" << endl;
    auto end2 = chrono::steady_clock::now();
    time2 = end2 - start2;
    cout << "Time: " << time2.count() << endl;
    cout << endl;
    cout << "Binary search: " << endl;
    chrono::duration<double> time3;
    auto start3 = chrono::steady_clock::now();
    index = binarySearch(arr, key, n, l, r);
    if (index >= 0)
        cout << "Key " << key << " found at index " << index << endl;
    else
        cout << "Key not found" << endl;
    auto end3 = chrono::steady_clock::now();
    time3 = end3 - start3;
    cout << "Time: " << time3.count() << endl;
    delete[] arr;
    return 0;
}
