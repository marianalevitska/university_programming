#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(0, "");
    int line[n][m];
    int n, m, N, M, i, j, a, b;
    int S, S1 = 0, S2 = 0;
    while (n < N) // перевірка правильності введення
    {
        cout << "\nВведiть розмiрнiсть матрицi: n = " << endl;
        cin >> n;
        break;
    }
    while (b >= a)
    {
        cout << "\nВведiть границi пром1жку a i b: " << endl;
        cin >> a >> b;
        break;
    }
    cout << "\n\nМатриця А:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (j = 0; j < m; j++)
        {
            line[i][j] = rand() % (b - a) + a;
            cout << setw(5) << line[i][j];
        }
    }
}