#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "");
    int a[N][M] = {};
    int n = N + 1, N, M, m = M + 1;
    int A = 0, B = 0, S, S1 = 0, S2 = 0;
    while (n > N) // перевірка правильності введення
    {
        cout << "\nEnter the dimension of the matrix: n = " << endl;
        cin >> n;
    }
    while (A >= B)
    {
        cout << "\n Enter the boundaries of the gap a i b: " << endl;
        cin >> A >> B;
    }
    cout << "\n\nA matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % (B - A) + A;
            cout << setw(5) << a[i][j];
        }
    }
}