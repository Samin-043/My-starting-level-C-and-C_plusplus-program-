
#include<stdio.h>
#include<string.h>
#include<conio.h>
void function1(char name[],int size);
void function2(int marks[] ,int size);

int main()
{

    int marks[]={72,75,77};
    char name[100]={'a','b','c'};

    function1(name,3);
    function2(marks,3);

}

void function1(char name[],int size)
{
    for(int j=0;j<size;j++)
    {
        printf("%s \n",name);
    }

}

void function2(int marks[],int size)
{
    for(int i=0;i<size;i++)
    {

        printf("The marks of %d position is %d\n",i,marks[i]);


    }

}
