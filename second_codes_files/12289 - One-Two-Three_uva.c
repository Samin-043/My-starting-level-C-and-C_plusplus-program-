#include<stdio.h>
#include<string.h>

int main()
{
    char ch[12];
    int test,i;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s",ch);
        if(strlen(ch)>3)
            printf("3\n");
        else if((ch[0]=='t'&&ch[1]=='w'&&ch[2]=='o')||(ch[0]=='t'&&ch[2]=='o')||(ch[0]=='t'&&ch[1]=='w')||(ch[1]=='w'&&ch[2]=='o'))
            printf("2\n");
        else if((ch[0]=='o'&&ch[1]=='n'&&ch[2]=='e')||(ch[0]=='o'&&ch[1]=='n')||(ch[1]=='n'&&ch[2]=='e')||(ch[0]='o'&&ch[2]=='e'))
            printf("1\n");

    }

    return 0;
}
