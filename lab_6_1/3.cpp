#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m, a, b;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % (b - a) + a;
            cout << setw(5) << arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < m; j++)
        {
            cout << setw(5) << arr[j][i];
        }
    }
    delete[] arr;
}