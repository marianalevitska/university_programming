// #include <iostream>
// #include <iomanip>
// #include <cmath>
// #include <math.h> // добавляем математические функции
// using namespace std;
// // функция, интеграл
// double f(double x)
// {
//   return (pow(x, 2.0) + x);
// }

// int main()
// {
//   int i;               // счётчик
//   double Integral;     // здесь будет интеграл
//   double a = 2, b = 3; // задаём отрезок интегрирования
//   double h = 0.1;      // задаём шаг интегрирования

//   double n; // задаём число разбиений n

//   n = (b - a) / h;
//   // вычисляем интеграл по формуле центральных прямугольников
//   Integral = 0.0;
//   for (i = 0; i <= n; i++)
//   {
//     Integral = Integral + h * f(a + h * (i - 0.5));
//     cout << "I1 = " << Integral << "\n";
//   }
//   system("pause");
// }

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h> // добавляем математические функции
using namespace std;

double f(double x)
{
  return (2 * pow(x, 3.0) - 7 * x + 4);
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