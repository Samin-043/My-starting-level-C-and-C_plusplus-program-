#include<stdio.h>
int main()
{
    char str1[100];
    int n=5,i;
    for(i=0;i<n;i++)
    {
        printf("%d ",i+1);
        getchar();
        printf("%[^\n]s",str1);

    }
    for(i=0;i<n;i++)
    {

        printf("%s",str1[i]);
    }




}
