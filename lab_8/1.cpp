#include <iostream>
#include <string>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
unsigned count_words_odd(const char *s)
{
    unsigned i = 0, n = 0;
    do
    {
        if (isalnum(*s))
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

//выводит на экран частоту вхождения каждой буквы
void print_repchar(FILE *_out, const char *s)
{
    int i;
    unsigned int abc[26];

    memset(abc, 0, sizeof(abc));
    while (*s)
    {
        i = toupper(*s);
        if (i >= 'A' && i <= 'Z')
            ++abc[i - 'A'];
        ++s;
    }

    for (i = 0; i < 26; ++i)
    {
        if (abc[i] > 0)
            fprintf(_out, "%C(%u)\n", (char)(i + 'A'), abc[i]);
    }
    putc('\n', _out);
}

//удаляет текст размещен в круглых скобках
char *str_rem(char *s, char fc, char lc)
{
    char *i, *p, *t = s;
    while (*s && (*s != fc))
        ++s;

    for (p = s; *s; *s = *p)
    {
        if (*p == fc)
        {
            i = p + 1;
            while (*i && (*i != lc))
                ++i;

            if (*i == lc)
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
int main()
{
    string str;
    cout << "\nEnter the line: ";
    cin >> str;
    int c = 0, d = 0;
}