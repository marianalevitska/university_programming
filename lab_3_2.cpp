#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int ch;
    cout << "\nEnter the week day number ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "\n"
             << ch << " - Monday" << endl;
        break;
    case 2:
        cout << "\n"
             << ch << " - Tuesday" << endl;
        break;
    case 3:
        cout << "\n"
             << ch << "- Wednesday" << endl;
        break;
    case 4:
        cout << "\n"
             << ch << " - Thursday" << endl;
        break;
    case 5:
        cout << "\n"
             << ch << " - Friday" << endl;
        break;
    case 6:
        cout << "\n"
             << ch << "- Saturday" << endl;
        break;
    case 7:
        cout << "\n"
             << ch << "- Sunday" << endl;
        break;
    default:
    {
        cout << "\n MISTAKE!!!" << endl;
        break;
    }
    }