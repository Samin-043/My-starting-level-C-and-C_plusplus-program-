#include<stdio.h>
int main()
{
    char c,str[100];
    int i,l,count=0;

    gets(str);
    c=getchar();

    for(i=0;str[i]!='\0';i++)
    {

        if(str[i]==c)
          {
              count++;
              printf("%d ",i+1);
          }

    }
    printf("\n");
    printf("%d",count);



    return 0;
}
