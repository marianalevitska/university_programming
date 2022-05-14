#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m, a, b;
    int **arr = new int *[n];
    cout << "\nEnter the dimension of the array: n = " << endl;
    cin >> n;
    cout << "\nEnter the dimension of the array: m = " << endl;
    cin >> m;
    do
    {
        cout << "\nEnter a i b: " << endl;
        cin >> a >> b;

    } while (a >= b);
    cout << "\n\nArray A:" << endl;
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
            cout << arr[i][j];
        }
    }
    cout << "\n\nTransparent array A:" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i];
        }
        cout << endl;
    }
    delete[] arr;
}