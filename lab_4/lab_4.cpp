

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h> // добавляем математические функции
using namespace std;

double f(double x)
{
  return (2 * x * x * x - 7 * x + 4);
}
int main()
{
  double a = 0.0, b = 2.0;
  int n = 5;
  double s = (f(a) + f(b)) / 2;
  double h = (b - a) / n;
  for (int i = 1; i <= n - 1; i++)
  {
    s += f(a + i * h);
  }
  double I = h * s;
  cout << setprecision(10) << I << endl;

  return 0;
}