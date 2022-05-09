#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

double f(double x)
{
  return (2 * pow(x, 4.0) + x * x + 2 * x + 1) / (x * x + 1);
}
double Left_Rect(double a, double b, int n)
{
  double h = (b - a) / n; // Розрахунок величини кроку інтегрування h
  double Intgrl = 0.0;    // Тимчасовій змінній Intgrl присвоїти значення 0
  for (int i = 0; i <= n - 1; i++)
  {
    Intgrl += h * f(a + i * h);
  }
  return Intgrl;
}
int main()
{
  // введення змінних a,b i кількості ділянок n
  double a, b;
  int n, y;
  cout << "enter the beginning of the integration segment a: ";
  cin >> a;
  cout << "enter the end of the integration segment b: ";
  cin >> b;
  cout << "enter the number of plotsn n: ";
  cin >> n;
  cout << "the integral of the function on the segment [" << a << ";" << b << "] is " << Left_Rect(a, b, n) << endl;
  cout << "do you want to repeat counting? (1 - yes) ";
  cin >> y;
  if (y == 1)
  {
    cout << "enter the beginning of the integration segment a: ";
    cin >> a;
    cout << "enter the end of the integration segment b: ";
    cin >> b;
    cout << "enter the number of plotsn n: ";
    cin >> n;
    cout << "the integral of the function on the segment [" << a << ";" << b << "] is " << Left_Rect(a, b, n) << endl;
    cout << "do you want to repeat counting? (1 - yes) ";
    cin >> y;
  }
  return 0;
}
