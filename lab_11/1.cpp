#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
#include <fstream>
#include <windows.h>
using namespace std;
int main(void)
{
    int n, k;
    string line;
    cout << "\nEnter line: " << endl;
    string str, word;

    ifstream myNote;
    myNote.open("theNote.txt", fstream::app);

    while (!myNote.eof())
    {
        str = "";
        getline(myNote, str);
    }
    myNote.close();
    stringstream words(str);

    ofstream createFile("theNote1.txt");
    createFile.close();
    fstream myFile;
    myFile.open("theNote1.txt", ios::out);
    while (words >> word)
    {
        swap(word[0], word[word.length() - 1]);
        cout << word << " ";
        myFile << word << " ";
    }
    myFile.close();
    return 0;
}
