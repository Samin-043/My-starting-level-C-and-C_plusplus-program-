#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char str[]="Today IS A Election Day\n";
    int i;
    char ch;
    while(str[i])
    {
        ch=str[i];
        if(isupper(ch))
           {
               tolower(ch);
                cout<<ch;
           }
        i++;

    }


    return 0;
}
