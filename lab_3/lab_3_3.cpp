#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(0, "");
    double p = 1.0;
    double factorial, z, q;
    for (int i = 1; i <= 5; i++)
    { // обраховуємо чисельник
        factorial = 1;
        int j = 1;
        while (j <= i)
        {
            factorial *= j;
            j++;
        }
        z = (double)(pow(i, 2) + 2 * i + 3);
        q = factorial / z;
        p = p * q;
    }
    cout << "\nResult:" << p << endl;
    system("pause");
    return 0;
}