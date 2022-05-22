#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
using namespace std;

// кількість слів непарної довжини
int count_words_odd(char *s)
{
    int i = 0, n = 0;
    do
    {
        if (isalnum(*s)) // Перевірка, чи є символ літерою або цифрою
            ++i;
        else if (i > 0)
        {
            if (i & 1)
                ++n;
            i = 0;
        }
    } while (*s++ != '\0');
    return n;
}

// частота входження кожної літери

void print_repchar(FILE *out, char *s) // FILE out - поток
{
    int i;
    int abc[26];

    memset(abc, 0, sizeof(abc)); //заповнює перші sizeof(abc) - довжина в байтах цифрою 0
    while (*s)
    {
        i = toupper(*s); //перетворює символ у верхній регістр
        if (i >= 'A' && i <= 'Z')
            ++abc[i - 'A'];
        ++s;
    }

    for (i = 0; i < 26; ++i)
    {
        if (abc[i] > 0)
            fprintf(out, "%C(%u)\n", (char)(i + 'A'), abc[i]);
    }
    putc('\n', out);
}

// видаляє текст в круглях дужках
char *str_rem(char *s, char f, char c)
{
    char *i, *p, *t = s;
    while (*s && (*s != f))
        ++s;

    for (p = s; *s; *s = *p)
    {
        if (*p == f)
        {
            i = p + 1;
            while (*i && (*i != c))
                ++i;

            if (*i == c)
            {
                ++s;
                p = i;
                continue;
            }
        }
        ++s;
        ++p;
    }
    return t;
}

int main(void)
{
    int total = 0;
    int k;
    char s[k];
    cout << "Enter maximal value of numbers in line: ";
    cin >> k;
    cout << "Enter the line, which finished with '.' ";
    cin.getline(s, k, '.'); //введення даних з потоку до роздільника *.*
    cout << "count words odd: \n";
    count_words_odd(s);
    print_repchar(stdout, s);
    puts(s);                    //Виводить рядок s та перехід на наступний рядок
    puts(str_rem(s, '(', ')')); //виводить рядок s з виделеним текстом в ()
    return 0;
}
