#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "");
    int n, N, M, m, a, b;
    int S, S1 = 0, S2 = 0;
    int line[n][m];
    cout << "\nEnter maximal lines number of massive N ";
    cin >> N;
    cout << "\nEnter maximal massive width M ";
    cin >> M;
    while (n < N) // перевірка правильності введення
    {
        cout << "\nEnter the dimension of the massive: n = " << endl;
        cin >> n;
        break;
    }
    while (m < M) // перевірка правильності введення
    {
        cout << "\nEnter the dimension of the massive: m = " << endl;
        cin >> m;
        break;
    }
    while (b >= a)
    {
        cout << "\n Enter the boundaries of the gap a i b: " << endl;
        cin >> a >> b;
        break;
    }
    cout << "\n\nA massive:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < m; j++)
        {
            line[i][j] = a + rand() % b;
            cout << setw(5) << line[i][j];
        }
    }
}