
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Election Day is Declared";
    char str2[]="a,e,i,o,u";
    char *ans;

    printf("The line is '%s':",str1);
    ans=strpbrk(str1,str2);

    while(ans!='\0')
    {
        printf("%c",*ans);
        ans=(ans+1,str2);

    }



//printf("%c",*ans);
    /*while(str1!=NULL)
    {
        printf("%c",*ans);
        ans=strpbrk(str1+1,str2);

    }*/
    printf("\n");

}
