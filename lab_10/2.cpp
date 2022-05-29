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
        int jmax = rand() % 20;
        Z.push_back(jmax);
    }
    cout << endl;
    for (int i = 0; i < Z.size(); i++)
        cout << Z[i] << " ";
    cout << endl;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < Z.size(); i++)
    {
        if (Z[i] % 3 == 0)
        {
            count++;
            sum += Z[i];
        }
    }
    cout << "The sum of the elements that are divisible by 3 is " << sum << endl;
    cout << "The number of elements that are divisible by 3 is " << count << endl;
}