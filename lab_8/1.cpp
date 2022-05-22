#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    printf("Enter text. \n");
    do
    {
        ch = getchar();
    } while (ch != '.');
    return 0;
}