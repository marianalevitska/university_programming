#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(0, "");
    int k, m, n;
    cout << "\n\n\tenter the number of values in one line( 3 <= k <= 10):\n ";
    cin >> k;
    cout << "\n\n\tenter the number of integers:\n ";
    cin >> m;
    cout << "\n\n\tenter the number of valids:\n ";
    cin >> n;
    cout << "\n\n\tGENERATING RANDOM NUMBERS\n";
    srand(time(0)); // ініціалізація початкового заповнення
    cout << "\n\n\trandom integers in the interval [-25;30]: \n";
    for (int i = 0; i < m; i++)
    {
        if (i % k == 0 && m % k == 0)
        {
            cout << "\n"; // генерація цілого випадкового числа
            int numb = -25 + rand() % 30;
            cout << numb << "\t";
        }
        else if (i % k != 0 || m % k != 0)
        {
            cout << "The number of integers isn't right";
        }
    }

    cout << "\n\n\tvalid random numbers in the interval [1;5]:\n";
    for (int i = 0; i < n; i++)
    {
        if (i % k == 0 && n % k == 0)
        {
            cout << "\n"; // генерація дійсного випадкового числа
            float number = 1.0 + (float)rand() / RAND_MAX * 10 - 5.0;
            cout << setprecision(2) << number << "\t";
        }
        else if (i % k != 0 || n % k != 0)
        {
            cout << "The number of valids isn't right";
        }
    }
    system("pause");
    return 0;
}