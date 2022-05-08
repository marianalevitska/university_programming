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
    // getch();
    // max = line[1];
    // min = line[1];

    // for (i = 2; i <= n; i++)
    // {
    //     if (line[i] > max)
    //     {
    //         max = line[i];
    //         nmax = i;
    //     }
    //     if (line[i] < min)
    //     {
    //         min = line[i];
    //         nmin = i;
    //     }
    // }

    // if (nmin > nmax)
    // {
    //     for (i = nmax; i <= nmin; i++)
    //     {
    //         d = d * line[i];
    //     }
    // }
    // else
    // {
    //     for (i = nmin; i <= nmax; i++)
    //     {
    //         d = d * line[i];
    //     }
    // }

    // cout << "\n\n\tMinimal value [" << nmin << "]=" << min << "\n";
    // cout << "\n\n\tMaximal value [" << nmax << "]=" << max << "\n";
    // cout << "\n\n\tProduct of values between min and max = " << d << endl;

    // getch();
    // for (i = max = 0, imax = line[0]; i < n; i++)
    // {
    //     if (max < line[i])
    //     {
    //         max = line[i];
    //         imax = i;
    //     }
    // }
    // cout << "\n\n\tMax value is\t" << max;
    // cout << "\n\n\tIndex of max value is\t" << imax;
    // getch();
}