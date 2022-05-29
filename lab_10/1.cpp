#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(void)
{
    int n, k;
    vector<int> Z;
    cout << "\nEnter the number of elements: " << endl;
    cin >> n;
    cout << "\nEnter the elements: " << endl;
    srand((unsigned)time(NULL));
    int b = 10 + rand() % 6;
    for (int a = 0; a <= b; a++)
    {
        int jmax = -10 + rand() % 20;
        Z.push_back(jmax);
        cout << Z[a] << ",";
    }
    cout << endl;
    for (int i = 0; i < Z.size(); i++)
        cout << Z[i] << " ";
    cout << endl;

    int min_elem = 0;
    int min_elem_index;

    for (int i = 0; i < Z.size(); i++)
    {
        if (min_elem > Z[i])
        {
            min_elem = Z[i];
            min_elem_index = i;
        }
    }

    swap(Z[0], Z[min_elem_index]);
    cout << " Changed array : " << endl;

    for (int i = 0; i < Z.size(); i++)
        cout << Z[i] << " ";
    cout << endl;
}