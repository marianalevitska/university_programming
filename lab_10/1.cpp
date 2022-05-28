// #include <iostream>
// #include <conio.h>

// using namespace std;
// int main()
// {
//     // setlocale(0, "russian");
//     int n;
//     int z[n];
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     // cout << " Array z : " << endl;

//     cout << "Enter the elements of array z: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> z[i];
//     }

//     int min_elem = z[0], min_elem_index, swap;

//     for (int i = 0; i <= n; i++)
//     {
//         if (min_elem > z[i])
//         {
//             min_elem = z[i];
//             min_elem_index = i;
//         }
//     }

//     swap = z[0];
//     z[0] = z[min_elem_index];
//     z[min_elem_index] = swap;

//     cout << " Chenged array z : " << endl;

//     for (int i = 0; i <= n; i++)
//     {
//         cout << i << " Array z elements =  " << z[i] << endl;
//     }

//     _getch();
// }

// #include <iostream>
// #include <conio.h>

// using namespace std;
// int main(void)
// {
//     int n = 10;
//     // setlocale(0, "russian");
//     int z[n];
//     cout << " Random array : " << endl;

//     for (int i = 0; i <= n; i++)
//     {
//         z[i] = rand() % 100;
//         cout << i << " array elements = " << z[i] << endl;
//     }

//     int min_elem = z[0], min_elem_index, swap;

//     for (int i = 0; i <= n; i++)
//     {
//         if (min_elem > z[i])
//         {
//             min_elem = z[i];
//             min_elem_index = i;
//         }
//     }

//     swap = z[0];
//     z[0] = z[min_elem_index];
//     z[min_elem_index] = swap;

//     cout << " Changed array : " << endl;

//     for (int i = 0; i <= n; i++)
//     {
//         cout << i << " elements =  " << z[i] << endl;
//     }

//     _getch();
// }
#include <iostream>>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    vector<int> Z[n];
    cout << "\nEnter the number of elements: ";
    cin >> n;
    // 1.2. Записати у вектор значення [ 1, 2, 3, 4, 5 ]
    for (int i = 0; i < Z.size(n); i++)
    {
        Z.push_back(k);
        cin >> k;
    }

    // 1.3. Вивести вектор на екран
    for (int i = 0; i < Z.size(); i++)
        cout << Z[i] << " ";
    cout << endl;
}