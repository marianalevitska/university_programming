#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;

    double min;
    vector<double> z;

    cout << "Enter the width of an array\n";
    cin >> n;
    for (size_t i = 0; i < n; ++i)
    {
        z.push_back(NULL);
        cin >> z.back();
    }
    cout << "\nArray\n";
    for (size_t i = 0; i < z.size(); ++i)
    {
        cout << z[i] << "   ";
    }
    cout << endl;

    //Поиск максимального и минимального элементов массива

    min = z[0];
    for (size_t i = 1; i < z.size(); ++i)
    {

        if (min > z[i])
        {
            min = z[i];
        }
    }

    cout << "Minimal value of an array" << min << endl;

    auto pos_min = find(z.begin(), z.end(), min);

    z.swap(z[distance(z.begin(), pos_min)], z.front()); //замена наименьшего с первым

    cout << "\nFinal Array\n";
    for (size_t i = 0; i < z.size(); ++i)
    {
        cout << z[i] << "   ";
    }
    cout << endl;
    return 0;
    return 0;
}