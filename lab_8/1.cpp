#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
using namespace std;
unsigned count_words_odd(const char *s);
void print_repchar(FILE *_out, const char *s);
char *str_rem(char *s, char fc, char lc);

int main(void)
{
    char s[100];
    cout << "Enter the line, which finished with '.' ";
    cin.getline(s, 100, '.');
    printf("count words odd: %u\n", count_words_odd(s));
    print_repchar(stdout, s);
    puts(s);
    puts(str_rem(s, '(', ')'));
    return 0;
}

// кількість слів непарної довжини
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

// частота входження кожної літери
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

// видаляє текст в круглях дужках
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
