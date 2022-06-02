// #include <iostream>
// #include <vector>
// #include <math.h>
// #include <stdlib.h>
// #include <fstream>
// using namespace std;
// int main(void)
// {
//     int n, k;
//     string s;
//     vector<int> Z;
//     cout << "\nEnter the number of elements: " << endl;
//     cin >> n;
//     cout << "\nEnter the elements: " << endl;
//     srand((unsigned)time(NULL));
//     ifstream myNote("theNote.txt", ios::in);
//     s.clear();
//     while (getline(myNote, s))
//     {
//         Z.push_back(s);
//     }
//     cout << "Читання з текстового файлу рядка типу string:" << endl;
//     for (const auto &p : Z)
//     {
//         cout << p << endl;
//     }

//     // int b = 10 + rand() % 6;
//     // for (int a = 0; a <= b; a++)
//     // {
//     //     int jmax = rand() % 20;
//     //     Z.push_back(jmax);
//     // }
//     cout
//         << endl;
//     for (int i = 0; i < Z.size(); i++)
//         cout << Z[i] << " ";
//     cout << endl;
//     int count = 0;
//     int sum = 0;
//     for (int i = 0; i < Z.size(); i++)
//     {
//         if (Z[i] % 3 == 0)
//         {
//             count++;
//             sum += Z[i];
//         }
//     }
//     cout << "The sum of the elements that are divisible by 3 is " << sum << endl;
//     cout << "The number of elements that are divisible by 3 is " << count << endl;
// }
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
    // getline(cin, str);
    // vector<string> v1;
    ifstream myNote;
    myNote.open("theNote.txt", fstream::app);
    // str.clear();
    while (!myNote.eof())
    {
        str = "";
        getline(myNote, str);
    }
    // ifstream My_test1("theNote.txt", ios::out);

    // string x1;
    // char x_1[80];
    // My_test1 >> x1;
    // cout << x1 << endl;
    // My_test1.clear();
    // cout << str;
    myNote.close();
    stringstream words(str);

    while (words >> word)
    {
        swap(word[0], word[word.length() - 1]);
        cout << word << " ";
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <math.h>
// #include <stdlib.h>
// using namespace std;
// int main(void)
// {
//     int n, k;
//     vector<int> Z;
//     cout << "\nEnter the number of elements: " << endl;
//     cin >> n;
//     cout << "\nEnter the elements: " << endl;
//     srand((unsigned)time(NULL));
//     int b = 10 + rand() % 6;
//     for (int a = 0; a <= b; a++)
//     {
//         int jmax = rand() % 20;
//         Z.push_back(jmax);
//     }
//     cout << endl;
//     for (int i = 0; i < Z.size(); i++)
//         cout << Z[i] << " ";
//     cout << endl;
//     int count = 0;
//     int sum = 0;
//     for (int i = 0; i < Z.size(); i++)
//     {
//         if (Z[i] % 3 == 0)
//         {
//             count++;
//             sum += Z[i];
//         }
//     }
//     cout << "The sum of the elements that are divisible by 3 is " << sum << endl;
//     cout << "The number of elements that are divisible by 3 is " << count << endl;
// }
// #include <iostream>
// #include <vector>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>
// #include <string>
// #include <sstream>
// using namespace std;
// int main(void)
// {
//     int n, k;
//     string line;
//     cout << "\nEnter line: " << endl;
//     string str, word;
//     getline(cin, str);
//     stringstream words(str);
//     while (words >> word)
//     {
//         swap(word[0], word[word.length() - 1]);
//         cout << word << " ";
//     }
//     return 0;
// }