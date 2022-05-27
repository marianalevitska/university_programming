#include <iostream>
#include <string>
#define n 3
using namespace std;
struct stud //описуємо структуру STUD
{
    string surname;
    int math;
    int physics;
    int IT;
};

int main()
{
    int k = 4;
    int count = 0;
    int sum = -1;
    stud student[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Please enter student's SURNAME: ";
        cin >> student[i].surname;
        cout << "Please enter student's MATH MARK: ";
        cin >> student[i].math;
        cout << "Please enter student's PHYSICS MARK: " << endl;
        cin >> student[i].physics;
        cout << "Please enter student's IT MARK: " << endl;
        cin >> student[i].IT;
    }

    for (i = 0; i < n; i++)
    {
        if (student[i].math == k && student[i].physics != k && student[i].IT != k ||
            student[i].math != k && student[i].physics == k && student[i].IT != k ||
            student[i].math != k && student[i].physics != k && student[i].IT == k)
        {
            count += 1;
        }
    }
    cout << "The number of students with one 4 mark is " << count << endl;
}