
#include<stdio.h>


int main()
{
    int i;
    char name[20];

    while((name[i]=getchar())!='\n')
    {
         printf("%c",name[i]);

        i++;
    }
    //printf("%c",name);


}
