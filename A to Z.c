#include<stdio.h>
int main()
{
    char a='A';
    a='A';
    while(a<='Z')
    {
        printf("%c\n",a);
        a++;
    }
}