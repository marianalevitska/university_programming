#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main()
{
    setlocale(0, "");
    int N, M, i, j, a, b;
    int n;
    int m;
    int S, S1 = 0, S2 = 0;
    int line[n][m];
    // cout << "\nEnter maximal walue of lines N: ";
    // cin >> N;
    // cout << "\nEnter maximal walue of width M: ";
    // cin >> M;

    while (n < N) // перевірка правильності введення
    {
        cout << "\nEnter the dimension of the array: n = " << endl;
        cin >> n;
        break;
    }
    while (m < M) // перевірка правильності введення
    {
        cout << "\nEnter the dimension of the array: m = " << endl;
        cin >> m;
        break;
    }
    while (b >= a)
    {
        cout << "\nEnter a i b: " << endl;
        cin >> a >> b;
        break;
    }
    cout << "\n\nArray A:" << endl;
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