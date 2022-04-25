#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h> // добавляем математические функции
using namespace std;
// функция, интеграл
double f(double x)
{
    return (pow(x, 2.0) + x);
}

int main()
{
    int i;               // счётчик
    double Integral;     // здесь будет интеграл
    double a = 2, b = 3; // задаём отрезок интегрирования
    double h = 0.2;      // задаём шаг интегрирования

    double n; // задаём число разбиений n

    n = (b - a) / h;
    // вычисляем интеграл по формуле центральных прямугольников
    Integral = 0.0;
    for (i = 0; i <= n; i++)
    {
        Integral = Integral + h * f(a + h * (i - 0.5));
        cout << "I1 = " << Integral << "\n";
    }
    system("pause");
}
