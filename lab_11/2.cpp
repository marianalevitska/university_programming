#include <iostream>
#include <fstream>
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
void FillArray(stud *student);
{
    string text = "";
    ofstream createFile("theList.txt");
    createFile.close();
    ifstream readFile("theList.txt");
    readFile.close();
    for (int i = 0; i < n; i++)
    {
        cout << "Please enter student's NAME: ";
        cin >> student[i].name;
        cout << "Please enter student's GROUP: ";
        cin >> student[i].group;
        cout << "Please enter student's GRADES: " << endl;
        for (int j = 0; j < m; j++)
        {
            cin >> student[i].ses[j];
        }
    }
    ofstream writeFile("theList.txt");
    writeFile << text;
    writeFile.close();
}
void AddInfo()
{
    cout << endl;
    cout << "Add some information: " << endl;
    string add;
    getline(cin, add);
    ofstream addFile("theList.txt", ios_base::app);
    addFile << add << endl;
    addFile.close();
    cout << endl;
    Print();
}
void findStudent(stud *student, int sum, int count)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
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
}
void Print()
{
    string text;
    ifstream readFile("theList.txt");
    while (getline(readFile, text))
    {
        cout << text << endl;
    }
    readFile.close();
}

int main()
{
    int count = 0;
    int sum = 0;
    stud student[n];
    int i, j;
    stud *SIGN = new stud[n];
    SIGN->FillArray(SIGN);
    SIGN->Print();
    SIGN->findStudent(SIGN);
    SIGN->AddInfo();

    // for (i = 0; i < n; i++)
    // {
    //     cout << "Please enter student's NAME: ";
    //     cin >> student[i].name;
    //     cout << "Please enter student's GROUP: ";
    //     cin >> student[i].group;
    //     cout << "Please enter student's GRADES: " << endl;
    //     for (j = 0; j < m; j++)
    //     {
    //         cin >> student[i].ses[j];
    //     }
    // }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //         sum += student[i].ses[j];
    //     if (sum / 5 >= 4)
    //     {
    //         cout << "student which point above 4 " << endl;
    //         cout << "Name " << student[i].name << " "
    //              << "Group " << student[i].group << endl;
    //         count++;
    //     }

    //     sum = 0;
    // }

    // if (count == 0)
    //     cout << "There are no students with average grade more than 4.0" << endl;

    // return 0;
}