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
// лабораторна робота 5(1)
void Int_Counter(int m, int k)
{

    for (int i = 0; i < m; i++)
    {
        if (i % k == 0 && m % k == 0)
            cout << "\n"; // генерація цілого випадкового числа
        int numb = -25 + rand() % 30;
        cout << numb << "\t";
    }
}
void Valid_Counter(int f, int k)
{

    for (int i = 0; i < f; i++)
    {
        if (i % k == 0 && f % k == 0)

            cout << "\n"; // генерація дійсного випадкового числа
        float number = 1.0 + (float)rand() / RAND_MAX * 10 - 5.0;
        cout << setprecision(2) << number << "\t";
    }
}

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
    four(d, e, n, y);
    // ----------
    // лабораторна робота 5(1)
    int k, m, f;
    srand(time(0));
    cout << "\nTHIRD TASK" << endl;
    cout << "\n\n\tenter the number of values in one line( 3 <= k <= 10):\n ";
    cin >> k;
    cout << "\n\n\tenter the number of integers:\n ";
    cin >> m;
    cout << "\n\n\tenter the number of valids:\n ";
    cin >> f;
    cout << "\n\n\tGENERATING RANDOM NUMBERS\n";
    cout << "\n\n\trandom integers in the interval [-25;30]:\n ";
    Int_Counter(m, k);
    cout << "\n\n\tvalid random numbers in the interval [1;5]:\n";
    Valid_Counter(f, k);

    return 0;
}