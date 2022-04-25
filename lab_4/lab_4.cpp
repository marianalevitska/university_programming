#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
double f(double x)
{
  return ((2 * pow(x, 4.0) + x * x + 2 * x + 1) / (x * x + 1));
}
int main()
{
  double a, b;
  int n;
  cin >> a >> b >> n;
  double s = (f(b) + f(a)) / 2;
  double h = (b - a) / n;
  for (int i = 0; i <= n - 1; i++)
  {
    s += f(a + i * h);
  }
  double I = (h * s) / 2;
  cout << setprecision(10) << I << endl;
  cout << "Do you want to check again ?" << endl;
  cout << "Write 1 if yes or 0 if no" << endl;
  int c;
  cin >> c;
  if (c == 1)
  {
    double a, b;
    int n;
    cin >> a >> b >> n;
    double s = (f(b) + f(a)) / 2;
    double h = (b - a) / n;
    for (int i = 0; i <= n - 1; i++)
    {
      s += f(a + i * h);
    }
    double I = (h * s) / 2;
    cout << setprecision(10) << I << endl;
  }
  else
  {
    return 0;
  }
}