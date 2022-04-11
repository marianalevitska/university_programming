#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double P = 1.0;
    double factorial, Q;
    for (int i = 1; i <= 10; i++)
    {
        factorial = 1;
        int j = 1;
        while (j <= i)
        {
            factorial *= j;
            j++;
        }
        Q = 2 + 1 / factorial;
        P = P * Q;
    }
    cout << "\n:" << P << endl;
    system("pause");
    return 0;
}