#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    setlocale(0, "");
    int N, M, i, j, a, b;
    int n = N + 1;
    int m = M + 1;
    // int S = 0, S1 = 0, S2 = 0;
    int line[n][m];
    cout << "\nEnter maximal value of lines N: ";
    cin >> N;
    cout << "\nEnter maximal value of width M: ";
    cin >> M;

    // перевірка правильності введення
    do
    {
        cout << "\nEnter the dimension of the array: n = " << endl;
        cin >> n;
    } while (n > N);
    // перевірка правильності введення
    do
    {
        cout << "\nEnter the dimension of the array: m = " << endl;
        cin >> m;
    } while (m > M);

    do
    {
        cout << "\nEnter a i b: " << endl;
        cin >> a >> b;

    } while (a >= b);
    cout << "\n\nArray A:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "\n\n";
        for (j = 0; j < m; j++)
        {
            line[i][j] = rand() % (b - a) + a;
            cout << setw(5) << line[i][j];
        }
    }
    // do
    // {
    //     for (int i = 1; i < n; i++)
    //     {
    //         S1 = 0;
    //         for (int j = 1; j < m; j++)
    //         {
    //             S += line[i][j];
    //             if (S > S1)
    //             {
    //                 S1 = S;
    //                 S2 = i + 1;
    //             }
    //         }
    //     }
    // } while (S > S1);
    //  cout << "\nThe biggest sum value is in line: " << S2;
    int str_sum[] = {};
    int max_str;
    int max_str_id;
    for (i = 0; i < n; i++)
    {
        str_sum[i] = 0;
        for (j = 0; j < m; j++)
        {
            printf("[%d][%d]=%d ", i, j, line[i][j]);
            str_sum[i] += line[i][j]; //вычисляем сумму эл-тов строки
        }
        printf("\nSum of line's elements: %d \n", str_sum[i]);
    }
    int x;
    max_str = str_sum[0];
    for (x = 0; x < m; x++)
    {
        if (max_str < str_sum[x])
        {
            max_str = str_sum[x];
            max_str_id = x;
        }
    }
    printf("Max sum = %d and line number - %d  \n \n", max_str, max_str_id);

    for (i = 0; i < m; i++)
    {
        printf("[%d][%d]=%d ", max_str_id, i, line[max_str_id][i]);
    }
}
