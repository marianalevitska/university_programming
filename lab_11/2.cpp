#include <iostream>
#include <fstream>
#include <string>
#define m 5
#define n 2
using namespace std;
struct stud //описуємо структуру STUD
{
    string name;
    string group;
    int ses[m];
};
void FillArray(stud *student) //вхідні дані (поля структури) вводяться з клавіатури і після введення записуються у файл

{
    string text = "";
    ofstream createFile("theList.txt");
    createFile.close();
    fstream myFile;
    myFile.open("theList.txt", ios::out);
    if (myFile.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter name: ";
            myFile << "Please enter student's NAME: ";
            cin >> student[i].name;
            myFile << student[i].name;
            myFile << endl;
            cout << "Enter group: ";
            myFile << "Please enter student's GROUP: ";
            cin >> student[i].group;
            myFile << student[i].group;
            myFile << endl;
            cout << "Enter marks: ";
            myFile << "Please enter student's GRADES: " << endl;
            for (int j = 0; j < m; j++)
            {
                cin >> student[i].ses[j];
                myFile << student[i].ses[j];
                myFile << endl;
            }
            myFile << endl;
        }
        myFile.close();
    }
}
void Print() //дані з файлу виводяться на екран
{
    fstream myFile;
    myFile.open("theList.txt", ios::in);
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
}
void AddInfo() //можливість дописувати дані у файл
{
    fstream myFile;
    // myFile.clear();
    myFile.open("theList.txt", ios::app);
    if (myFile.is_open())
    {
        cout << endl;
        cout << "Add some information: " << endl;
        string add;
        cin >> add;
        myFile << add;
        myFile.close();
    }
    cout << endl;
    Print();
}
void findStudent(stud *student, int sum, int count)
{

    fstream myFile;
    myFile.open("theList.txt", ios::app);
    if (myFile.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                sum += student[i].ses[j];
            if (sum / 5 >= 4)
            {
                cout << "student which point above 4 " << endl;
                myFile << "student which point above 4 " << endl;
                cout << "Name " << student[i].name << " "
                     << "Group " << student[i].group << endl;
                myFile << "Name " << student[i].name << " "
                       << "Group " << student[i].group << endl;
                count++;
            }

            sum = 0;
        }

        if (count == 0)
        {
            cout << "There are no students with average grade more than 4.0" << endl;
            myFile << "There are no students with average grade more than 4.0" << endl;
        }
        myFile.close();
    }
}

int main()
{
    int count = 0;
    int sum = 0;
    stud student[n];
    int i, j;
    fstream myFile;
    myFile.clear();
    FillArray(student);
    cout << "Print the text file info: " << endl;
    Print();
    findStudent(student, sum, count);
    AddInfo();
    Print();
    return 0;
}