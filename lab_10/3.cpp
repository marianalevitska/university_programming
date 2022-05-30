#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(void)
{
    int n, k;
    vector<string> v(3);
    string line;
    cout << "\nEnter line: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> line;
        v[i] = line;
    }

    do
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].find("a") != string::npos)
            {
                v[i].replace(v[i].find("a"), 1, "o");
            }
        }
    } while (v[0].find("a") != string::npos);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    system("pause");
    return 0;
}