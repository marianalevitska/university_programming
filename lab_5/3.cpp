#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "");
    int n, a, b, k, imin, imax, min, max;
    int line[n] = {};
    int i;
    int d;
    int *ptr1 = line;
    d = 1;
    k = 0;
    cout << "\n\n\tEnter the beginnig of numbers line (a): ";
    cin >> a;
    cout << "\n\n\tEnter the end of numbers line (b): ";
    cin >> b;
    cout << "\n\n\tEnter the number of items (n): ";
    cin >> n;
    cout << "\n\n\trandom integers in the interval [" << a << ";" << b << "] is" << endl;
    cout << "\n\n\tLine";
    for (i = 0; i < n; i++)
    {
        if (i % 10 == 0)
            cout << "\n"; // генерація цілого випадкового числа
        *ptr1 = a + rand() % b;
        cout << *ptr1 << "\t";
    }
    for (i = 0; i < n; i++)
    {
        if (*ptr1 < 0)
        {
            k += *ptr1;
        }
    }

    cout << "\n\n\tthe sum of negative values on the segment [" << a << ";" << b << "] is " << k << endl;
    for (i = 0; i < n; i++)
    {
        if (max < *ptr1)
        {
            max = *ptr1;
            imax = i;
        }
    }
    cout << "\n\n\tMax value is " << max << endl;
    cout << "\n\n\tMax value index is " << imax << endl;
    for (i = 0; i < n; i++)
    {
        if (min > *ptr1)
        {
            min = *ptr1;
            imin = i;
        }
    }
    cout << "\n\n\tMin value is " << min << endl;
    cout << "\n\n\tMin value index is " << imin << endl;
    if (imax < imin)
    {
        for (i = imax; i <= imin; i++)
        {
            d = d * *ptr1;
        }
    }
    else
    {
        for (i = imin; i <= imax; i++)
        {
            d = d * *ptr1;
        }
    }
    cout << "\n\n\tThe product of elements between min and max value is " << d << endl;
}