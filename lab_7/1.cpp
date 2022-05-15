#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
// завдання 1
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
// лабораторна робота 6(1)
void arr5(int N, int M, int a1, int b1,
          int n1,
          int m1,
          int S, int S1, int S2,
          int **arr)
{
    do
    {
        cout << "\nEnter the dimension of the array: n = " << endl;
        cin >> n1;
    } while (n1 > N);
    // перевірка правильності введення
    do
    {
        cout << "\nEnter the dimension of the array: m = " << endl;
        cin >> m1;
    } while (m1 > M);

    do
    {
        cout << "\nEnter a i b: " << endl;
        cin >> a1 >> b1;

    } while (a1 >= b1);
    cout << "\n\nArray A:" << endl;
    for (int i = 0; i < n1; i++)
    {
        arr[i] = new int[m1];
    }
    for (int i = 0; i < n1; i++)
    {
        cout << "\n\n";
        for (int j = 0; j < m1; j++)
        {
            arr[i][j] = rand() % (b1 - a1) + a1;
            cout << setw(5) << arr[i][j];
        }
    }
    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < m1; j++)
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
// меню вибору
void menue(int N, int M, int n1, int m1, int **arr, int x, int a, int b, int c, double d, double e, int n, int y, int k, int m, int f, int a1, int b1, int S, int S1, int S2)
{
    do
    {
        cout << "\nenter the number of operation (from 1 to 4): ";
        cin >> x;
        switch (x)
        {
        case 1:
            // int a, b, c;
            cout << "\nFIRST TASK" << endl;
            cout << "\nEnter the beginnig or counting: a ";
            cin >> a;
            cout << "\nEnter the end of counting: b ";
            cin >> b;
            cout << "\nRandom number in [a,b]: " << random(a, b, c);

            break;
        case 2:
            // лабораторна робота 4(1)
            // double d, e;
            // int n, y;
            cout << "\nSECOND TASK" << endl;
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
            break;
        case 3:
            // лабораторна робота 5(1)
            // int k, m, f;
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
            break;
        case 4:
            // лабораторна робота 6(1)

            {

                // int i, j, a1, b1;
                // int S = 0, S1 = 0, S2 = 0;
                cout << "\nEnter maximal value of lines N: ";
                cin >> N;
                cout << "\nEnter maximal value of width M: ";
                cin >> M;
                arr5(N, M, a1, b1, n1, m1, S, S1, S2, arr);
            }

            break;
        default:
            cout << "\nenter the number between 1 and 4";
            break;
        }
    } while (x > 4);
}
int main()
{
    int N, M;
    // для case 4
    int n1 = N + 1;
    int m1 = M + 1;
    int **arr = new int *[n1];
    int x;
    int a, b, c;
    double d, e;
    int n, y;
    int k, m, f;
    int i, j, a1, b1;
    int S = 0, S1 = 0, S2 = 0;
    menue(N, M, n1, m1, arr, x, a, b, c, d, e, n, y, k, m, f, a1, b1, S, S1, S2);
    return 0;
}