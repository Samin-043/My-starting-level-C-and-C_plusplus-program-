#include<stdio.h>
#include<string.h>
int main()
{

    /*printf("Enter size : ");
    scanf("%d",&n);

    char c[n],c1[10],i;
    gets(c);
    gets(c1);
   // for(i=0;i<n;i++)
    //{
      //  scanf("%s %s",&c[n],&c1[n]);

    //}*/
    char str1[20];
    char str2[20];
    char str3[20];
    int l,l1,l2;
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    strcpy(str3,str1);
    printf("\n\nstrcpy(str3,str1) is %s\n\n",str3);

    l1=strlen(str1);
    l2=strlen(str2);
    printf("str1 is  %d\n str2 is %d\n",l1,l2);

    strcat(str1,str2);
    printf("\n\nstrcat(str1,str2) is %s\n\n",str1);

    l=strlen(str1);
    printf("\n\nstrlen(str1) is %d\n\n",l);





}
