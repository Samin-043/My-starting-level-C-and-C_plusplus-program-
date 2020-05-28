#include<stdio.h>

int main()
{

    char str[100],str1[100];
    int i,flag=1;

    gets(str);
    gets(str1);

    for(i=0;str[i]!='\0'&&str1[i]!='\0';i++)
    {
        if(str[i]!=str1[i])
            flag=0;
        break;


    }
    if(flag==1)
        printf("same string\n");
    else
        printf("Not same\n");

}
