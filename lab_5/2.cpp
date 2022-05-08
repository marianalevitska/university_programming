#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(0, "");
    int n, a, b, k;
    int line[n];
    int i;
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
}