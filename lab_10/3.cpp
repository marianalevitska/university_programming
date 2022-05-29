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

    for (decltype(v.size()) i = 0; i <= v.size() - 1; i++)
    {
        cin >> line;
        v[i] = line;
    }
    cout << endl;
    line.replace(line.find("a"), 1, "o");

    cout << line << endl;
    system("pause");
    return 0;
}