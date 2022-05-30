#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;
int main(void)
{
    int n, k;
    string line;
    cout << "\nEnter line: " << endl;
    string str, word;
    getline(cin, str);
    stringstream words(str);
    while (words >> word)
    {
        swap(word[0], word[word.length() - 1]);
        cout << word << " ";
    }
    return 0;
}