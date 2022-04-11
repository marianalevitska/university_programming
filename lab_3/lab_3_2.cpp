#include <iostream>
#include <stdio.h> /* printf */
#include <math.h>

using namespace std;
int main()
{
    setlocale(0, "");
    int b;
    double a;

    cout << "\nEnter the number ";
    cin >> a;
    cout << "\nEnter the degree of the number ";
    cin >> b;
    switch (b)
    {
    case 2:
        cout << "\n"
             << pow(a, 2.0) << endl;
        break;
    case 3:
        cout << "\n"
             << pow(a, 3.0) << endl;
        break;
    case 4:
        cout << "\n"
             << pow(a, 4.0) << endl;
        break;
    case 5:
        cout << "\n"
             << pow(a, 5.0) << endl;
        break;
    default:

        cout << "\n Sorry, this number isn't in set" << endl;
        break;
    }
}
