#include<stdio.h>
int main()

{

    char text[100];
    int i,j;
    printf("please input string ");
    scanf("[\n]s",&text);
    printf("Input string is ");
    printf("%s",text);

    for(i=0;text[i]!='\0';i++)
    {

        if(i==0||(text[i]==' '&text[i+1]!=' '))
        {
            for(j=0;text[j]!='\0';j++)

            text[j]=text[j+1];
        }
    }
    printf("value of editing first character of word ");
    printf("%s\n",text);

}
