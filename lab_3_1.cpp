#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    float X0, Xk, delx, F;
    int a, b, c, x;
    cout << "Enter Data:\n"
         << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    cout << "Xstart=";
    cin >> X0;
    cout << "Xend=";
    cin >> Xk;
    cout << "Step delta x" << endl;
    cin >> delx;
    cout << "\nInterval"
         << "[" << X0 << "; " << Xk << "]"
         << "\t"
         << "Step delta x=" << delx;
    cout << "\n--------------------\n|     x   |       F |" << endl;
    cout << "\n|---------|---------|" << endl;
    x = X0;
    while (x < Xk)
    {
        if (x < 0 && b != 0)
        {
            F = ((a * (x ^ 2)) + b);
        }
        else if (x >= 0 && b == 0)
        {
            F = (x - a) / (x - c);
        }
        else
        {
            F = x / c;
        }
        cout << "|" << setw(9) << x << "|" << setw(9) << F << "|" << endl;
        x += delx;
    }
    cout << "\n-----------------------" << endl;
    return 0;
}