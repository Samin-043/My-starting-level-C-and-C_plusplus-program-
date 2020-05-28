#include<stdio.h>

int find_string_length(char* s)
{

    int len=0;
    while(*s!='\0')
    {
        s++;    //s++
        len++;

    }
    return len;

}


int main()
{

    char name[]="Bangladesh";
    printf(name);
    printf("\n");
    int length;
    length=find_string_length(name);
    printf("The length of the  %s is %d",name,length);
    return 0;


}
