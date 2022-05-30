// сортування по шелу лаба 12
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;

int increment(int *interval, int n)
{
    int multiplier1, multiplier2, multiplier3, counter;
    multiplier1 = multiplier2 = multiplier3 = 1;
    counter = -1;
    do
    {
        if (++counter % 2)
        {
            multiplier2 *= 2;
            interval[counter] = 8 * multiplier1 - 6 * multiplier2 + 1;
        }
        else
        {
            multiplier3 *= 2;
            interval[counter] = 9 * multiplier1 - 9 * multiplier3 + 1;
        }
        multiplier1 *= 2;
    } while (3 * interval[counter] < n);
    return ((counter > 0) ? (--counter) : (0));
}

void Sort(int *arr, int n)
{
    int interval;
    int j;
    int interval_arr[10];
    int counter;
    counter = increment(interval_arr, n);
    while (counter >= 0)
    {
        interval = interval_arr[counter--];

        for (int i = interval; i < n; i++)
        {
            int temp = arr[i];
            for (j = i - interval; (j >= 0) && (arr[j] > temp); j -= interval)
                arr[j + interval] = arr[j];
            arr[j + interval] = temp;
        }
    }
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
    cout << "Shell sort " << endl;
    chrono::duration<double> time1;
    auto start1 = chrono::steady_clock::now();
    Sort(arr, n);
    auto end1 = chrono::steady_clock::now();
    time1 = end1 - start1;
    cout << endl;
    cout << "Time: " << time1.count() << endl;
    cout << endl;
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
