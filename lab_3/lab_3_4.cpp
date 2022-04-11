#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    setlocale(0, "");
    double i, sum, k;
    float x;
    int n;
    cout << "Enter Data:\n"
         << endl;
    cout << "X=";
    cin >> x;
    cout << "N=";
    cin >> n;
    i = 1;
    sum = 0;
    while (i <= n)
    {
        k = (1 / i) + sqrt(fabs(x));
        sum = sum + k;
        i = i + 1;
    }
    cout << sum << " ";
    return 0;
}