#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(0, "");
    int k;
    3 <= k <= 10;
    cout << "\n\t\t generating random numbers \n\n\n";
    srand(time(NULL)); // ініціалізація початкового заповнення
    cout << "\n\n\trandom integers in the interval [-25;30]:\n";
    for (int i = 0; i < k; i++)
    {
        if (i % 10 == 0)
            cout << "\n"; // генерація цілого випадкового числа
        int number = -25 + rand() % 30;
    }
    cout << "\n\n\tvalid random numbers in the interval [1;5]:\n";
    for (int i = 0; i < k; i++)
    {
        if (i % 10 == 0)
            cout << "\n"; // генерація дійсного випадкового числа
        float number = 1 + rand() % 5;
        cout << setprecision(2) << number << "\t";
    }
    system("pause");
    return 0;
}