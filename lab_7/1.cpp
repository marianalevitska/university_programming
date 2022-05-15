#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
int random(int a, int b, int c)
{
    return c = a + rand() % (b - a);
}
// лабораторна робота 4(1)
double f(double x)
{
    return (2 * pow(x, 4.0) + x * x + 2 * x + 1) / (x * x + 1);
}
double Left_Rect(double d, double e, int n)
{
    double h = (e - d) / n; // Розрахунок величини кроку інтегрування h
    double Intgrl = 0.0;    // Тимчасовій змінній Intgrl присвоїти значення 0
    for (int i = 0; i <= n - 1; i++)
    {
        Intgrl += h * f(d + i * h);
    }
    return Intgrl;
}
void four(double d, double e, int n, int y)
{
    if (y == 1)
    {
        cout << "enter the beginning of the integration segment a: ";
        cin >> d;
        cout << "enter the end of the integration segment b: ";
        cin >> e;
        cout << "enter the number of plotsn n: ";
        cin >> n;
        cout << "the integral of the function on the segment [" << d << ";" << e << "] is " << Left_Rect(d, e, n) << endl;
        cout << "do you want to repeat counting? (1 - yes) ";
        cin >> y;
    }
}
// -------------------
int main()
{
    int a, b, c;
    cout << "\nFIRST TASK" << endl;
    cout << "\nEnter the beginnig or counting: a ";
    cin >> a;
    cout << "\nEnter the end of counting: b ";
    cin >> b;
    cout << "\nRandom number in [a,b]: " << random(a, b, c);
    cout << "\nSECOND TASK" << endl;
    // лабораторна робота 4(1)
    double d, e;
    int n, y;
    cout << "enter the beginning of the integration segment a: ";
    cin >> d;
    cout << "enter the end of the integration segment b: ";
    cin >> e;
    cout << "enter the number of plotsn n: ";
    cin >> n;
    cout << "the integral of the function on the segment [" << d << ";" << e << "] is " << Left_Rect(d, e, n) << endl;
    cout << "do you want to repeat counting? (1 - yes) ";
    cin >> y;
    // ----------
}