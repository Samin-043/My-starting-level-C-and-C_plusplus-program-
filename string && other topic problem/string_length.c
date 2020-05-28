#include<stdio.h>
int main()
{

    char text[80],i;


    gets(text);


    puts(text);
    for(i=0;text[i]!='\0';i++);

    printf("string length %d\n",i);

}
