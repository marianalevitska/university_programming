#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");
    int n, a, b, k, nmin, nmax, min, max, tmp;
    int imax;
    int line[n] = {};
    int i;
    int d;
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
        line[i] = a + rand() % b;
        cout << line[i] << "\t";
    }
    for (i = 0; i < n; i++)
    {
        if (line[i] < 0)
        {
            k += line[i];
        }
    }

    cout << "\n\n\tthe sum of negative values on the segment [" << a << ";" << b << "] is " << k << endl;
    auto max_value = max_element(line, line + n);
    cout << "\n\n\tMax value is " << *max_value << endl;
    auto min_value = min_element(line, line + n);
    cout << "\n\n\tMin value is " << *min_value << endl;
    for (i = 0; i < n; i++)
    {
        if (line[i]<max_value[i] & line[i]> min_value[i])
        {
            d = d * line[i];
        }
        else if (line[i] > max_value[i] & line[i] < min_value[i])
        {
            d = d * line[i];
        }
    }
    cout << "\n\n\tThe product of elements between min and max value is " << d << endl;
}