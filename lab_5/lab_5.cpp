#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(0, "");
    int k;
    3 <= k <= 10;
    cout << "generating random numbers" << endl;
    srand(time(NULL)); // ініціалізація початкового заповнення
    cout << "trandom integers in the interval [-25;30]: ";
    for (int i = 0; i < k; i++)
    {
        if (i % 10 == 0)
            cout << "\n"; // генерація цілого випадкового числа
        int numb = -25 + rand() % 30;
        cout << numb << "\t";
    }

    cout << "\n\n\tvalid random numbers in the interval [1;5]:\n";
    for (int i = 0; i < k; i++)
    {
        if (i % 10 == 0)
            cout << "\n"; // генерація дійсного випадкового числа
        float number = 1.0 + (float)rand() / RAND_MAX * 10 - 5.0;
        cout << setprecision(2) << number << "\t";
    }
    system("pause");
    return 0;
}