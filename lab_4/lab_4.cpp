

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h> // добавляем математические функции
using namespace std;

double f(double x)
{
  return (pow(x, 2.0) + x);
}
int main()
{
  double a = 2.0, b = 3.0;
  int n = 50;
  // double s = (f(a) + f(b)) / 2;
  double s = (f(b) - f(a)) / 2;
  double h = (b - a) / n;
  for (int i = 0; i <= n - 1; i++)
  {
    s += f(a + i * h);
  }
  double I = h * s;
  cout << setprecision(10) << I << endl;

  return 0;
}