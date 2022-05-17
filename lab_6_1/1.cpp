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
    int sum, max, row;
    int line[n][m];
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
    for (i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (j = 0; j < m; j++)
        {
            line[i][j] = rand() % (b - a) + a;
            cout << setw(5) << line[i][j];
        }
    }
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += line[i][j];
        }
        if (max < sum)
        {
            max = sum;
            row = i;
        }
    }
    // max = -1;
    // row = 1;
    // for (int i = 0; i < N; i++)
    // {
    //     sum = 0;
    //     for (int j = 0; j < M; j++)
    //     {
    //         sum = sum + line[i][j];
    //     }
    //     if (sum > max)
    //     {
    //         max = sum;
    //         row += i;
    //     }
    // }
    // max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int S = 0;

    //     for (int j = 0; j < m; j++)
    //     {
    //         S += line[i][j];
    //     }
    //     if (S >= max)
    //     {
    //         max = S;
    //         row = i;
    //     }
    // }
    cout << "\nThe biggest sum value is in line: " << row;
}