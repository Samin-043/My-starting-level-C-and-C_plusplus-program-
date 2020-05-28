#include<stdio.h>
#include<string.h>
int main()
{
    int arr[10];
    char name[100];
    int sum=0;

    for(int i=0;i<5;i++)
    {

            //scanf("%s",&name);
              gets(name);

            printf("name %d : %s\n",i+1,*(&name));


    }

    return 0;
}

