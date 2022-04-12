#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // setlocale(LC_ALL, "Ukrainian");
    double a, b, c, D, x1, x2;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    D = b * b - 4 * a * c;

    if (D > 0)
    {
        x1 = (-1 * b + sqrt(D)) / (2 * a);
        cout << "First root = " << x1 << endl;
        x2 = (-1 * b - sqrt(D)) / (2 * a);
        cout << "Second root = " << x2 << endl;
    }

    else if (D == 0 && (a) != 0 && (b) != 0 && (c) != 0)
    {
        x1 = (-b) / (2 * a);
        cout << "D=0, so x= " << x1 << endl;
    }

    else if (D < 0 && (a) != 0 && (b) != 0 && (c) != 0)
    {
        cout << "D<0, so there are no roots" << endl;
    }

    else if ((a) == 0 && (b) != 0 && (c) != 0)
    {
        x1 = (-c) / b;
        cout << "Only root = " << x1 << endl;
    }

    else if (b == 0 && a != 0 && c != 0)
    {
        x1 = sqrt((-c) / a);
        cout << "Only root = " << x1 << endl;
    }

    else if (c == 0 && a != 0 && b != 0)
    {
        x1 = 0;
        x2 = (-b) / a;
        cout << "First root = " << x1 << endl;
        cout << "Second root = " << x2 << endl;
    }

    else if (a == 0 && b == 0)
    {
        cout << "There are no roots" << endl;
    }

    else if (a == 0 && c == 0 || b == 0 && c == 0)
    {
        cout << "Only root=0" << endl;
    }

    return 0;
}