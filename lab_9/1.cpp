// Описати структуру з іменем STUD, яка містить поля: NAME – прізвище та ініціали;
// GROUP – група; SES – оцінки з п'яти предметів (масив з п'яти елементів). Написати
// програму, що реалізує наступні дії окремими функціями:
// – введення з клавіатури даних в масив ST, що складається з N змінних типу STUD;
// – виведення на екран прізвищ і номерів груп для всіх студентів, середній бал яких
//                                                                     більший за 4.0;
// якщо таких немає, то вивести повідомлення.
#include <iostream>
#include <string>
#define m 5
#define n 3
using namespace std;
struct stud //описуємо структуру STUD
{
    string name;
    string group;
    int ses[m];
};

int main()
{
    int count = 0;
    int sum = 0;
    stud student[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cout << "Please enter student's NAME: ";
        cin >> student[i].name;
        cout << "Please enter student's GROUP: ";
        cin >> student[i].group;
        cout << "Please enter student's GRADES: " << endl;
        for (j = 0; j < m; j++)
        {
            cin >> student[i].ses[j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            sum += student[i].ses[j];
        if (sum / 5 >= 4)
        {
            cout << "student which point above 4 " << endl;
            cout << "Name " << student[i].name << " "
                 << "Group " << student[i].group << endl;
            count++;
        }

        sum = 0;
    }

    if (count == 0)
        cout << "There are no students with average grade more than 4.0" << endl;

    return 0;
}