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
  double h = (b - a) / n;
  double Intgrl = 0.0;
  for (int i = 0; i <= n - 1; i++)
  {
    Intgrl += h * f(a + i * h);
  }
  return Intgrl;
}
int main()
{
  double a, b;
  int n;
  a = 2;
  b = 3;
  n = 1000;
  cout << "Left_Rect " << Left_Rect(a, b, n) << endl;
  return 0;
}
