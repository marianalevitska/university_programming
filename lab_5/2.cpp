#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(0, "");
    int n, a, b;
    int line[10];
    int i;
    cout << "\n\n\tEnter the beginnig of numbers line (a): ";
    cin >> a;
    cout << "\n\n\tEnter the end of numbers line (b): ";
    cin >> b;
    cout << "\n\n\tEnter the number of items (n): ";
    cin >> n;
    cout << "\n\n\trandom integers in the interval [" << a << ";" << b << "] is" << endl;
    for (i = 0; i < n; i++)
    {
        if (i % 10 == 0)
            cout << "\n"; // генерація цілого випадкового числа
        line[i] = a + rand() % b;
        cout << line[i] << "\t";
    }
    system("pause");
    return 0;
}