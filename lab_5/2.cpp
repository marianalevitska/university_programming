#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "");
    int n, a, b, k, nmin, nmax, min, max, tmp;
    int line[n];
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
    getch();
    max = line[1];
    min = line[1];

    for (i = 2; i <= n; i++)
    {
        if (line[i] > max)
        {
            max = line[i];
            nmax = i;
        }
        if (line[i] < min)
        {
            min = line[i];
            nmin = i;
        }
    }

    if (nmin > nmax)
    {
        for (i = nmax; i <= nmin; i++)
        {
            d = d * line[i];
        }
    }
    else
    {
        for (i = nmin; i <= nmax; i++)
        {
            d = d * line[i];
        }
    }

    cout << "\n\n\tMinimal value [" << nmin << "]=" << min << "\n";
    cout << "\n\n\tMaximal value [" << nmax << "]=" << max << "\n";
    cout << "\n\n\tProduct of values between min and max = " << d << endl;

    getch();
}