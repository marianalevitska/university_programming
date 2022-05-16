#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
bool check_polindrom(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter the word or number: ";
    cin >> str;
    if (check_polindrom(str))
    {
        cout << "Word is polindrom.";
    }
    else
    {
        cout << "Word is not polindrom";
    }
    return 0;
}