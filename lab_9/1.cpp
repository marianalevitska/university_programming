// Описати структуру з іменем STUD, яка містить поля: NAME – прізвище та ініціали;
// GROUP – група; SES – оцінки з п'яти предметів (масив з п'яти елементів). Написати
// програму, що реалізує наступні дії окремими функціями:
// – введення з клавіатури даних в масив ST, що складається з N змінних типу STUD;
// – виведення на екран прізвищ і номерів груп для всіх студентів, середній бал яких
//                                                                     більший за 4.0;
// якщо таких немає, то вивести повідомлення.
#include <iostream>
#include <string>
using namespace std;
struct STUD //описуємо структуру STUD
{
    string NAME;
    int GROUP;
    int SES[5] = {};
};
void first(struct STUD)
{
    STUD student;
    cout
        << "Enter name: ";
    cin >> student.NAME;
    cout << "Enter group: ";
    cin >> student.GROUP;
    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> student.SES[i];
    }
    cout << "Name: " << student.NAME << endl;
    cout << "Group: " << student.GROUP << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++)
    {
        cout << student.SES[i] << " ";
    }
    cout << endl;
}
int main()
{
    STUD student;
    first(student);
    return 0;
}
