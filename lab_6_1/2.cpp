#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main()
{
    setlocale(0, "");
    int N, M, i, j, a, b;
    int n = N + 1;
    int m = M + 1;
    int S = 0, S1 = 0, S2 = 0;
    int **arr = new int *[n];

    cout << "\nEnter maximal value of lines N: ";
    cin >> N;
    cout << "\nEnter maximal value of width M: ";
    cin >> M;

    // перевірка правильності введення
    do
    {
        cout << "\nEnter the dimension of the array: n = " << endl;
        cin >> n;
    } while (n > N);
    // перевірка правильності введення
    do
    {
        cout << "\nEnter the dimension of the array: m = " << endl;
        cin >> m;
    } while (m > M);

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
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            S += arr[i][j];
        }
        if (S1 <= S)
        {
            S2 = i + 1;
            S1 = S;
        }
    }
    cout << "\nThe biggest sum value is in line: " << S2;
    delete[] arr;
}