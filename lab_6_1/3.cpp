#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m, a, b;
    int max = 0;
    int min = 0;
    int **arr = new int *[n];
    int **arr1 = new int *[m];
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
            cout << setw(5) << arr[i][j];
        }
    }

    cout << "\n\nTransparent array A:" << endl;
    for (int i = 0; i < m; i++)
    {
        arr1[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < n; j++)
        {
            arr1[i][j] = arr[j][i];
            cout << setw(5) << arr1[i][j];
        }
    }
    cout << "\nMaximal value of main diagonal: ";
    for (int i = 0; i < n; i++)
    {
        if (arr1[i][i] > max)
        {
            max = arr1[i][i];
        }
        cout << max;
    }
    delete[] arr;
    delete[] arr1;
}