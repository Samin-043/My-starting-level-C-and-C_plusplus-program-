#include<stdio.h>
int main()
/*{
    char st1[]="Samin";
    char st2[]="Samin";
    int d=strcmp(st1,st2);

    if(d==0)

        printf("strings are equal\n");
    else
        printf("strings are not equal\n");

}
{
//Rvetse string//
    char st1[50];
    gets(st1);

    strrev(st1);

    printf("Reverse string is : %s\n",st1);

}
*/


//string reverse without libraray function//
{

    char st1[50];
    char st2[50];
    gets(st1);
    int i,j,len=0;

    for(i=0; st1[i]!='\0'; i++)
    {

        len++;

    }

    for(j=0,i=len-1; i>=0; i--,j++)
    {

        st2[j]=st1[i];

    }
    st2[j]='\0';

    printf("Reverse string is %s",st2);




}
