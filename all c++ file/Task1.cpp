#include<stdio.h>
#include<string.h>
void findCopyOfString(char *s,char *s1)
{
    printf("%s \n",strcpy(s,s1));

    //for(int i=0;s1[i]!='\0';i++)
    //printf("New String is : %s",s1[i]);

}
void findCompareTwoString(char *s,char *s1)
{
    if(strcmp(s,s1)==0)
        printf("Perfect String\n");

    else if(strcmp(s,s1)>0)
    {
        printf(s);
        printf("\n");
    }
    else
    {
        printf(s1);
        printf("\n");
    }
    //for(int i=0;s1[i]!='\0';i++)
    //printf("New String is : %s",s1[i]);

}
void findConatenetOneStringToAnother(char *s,char *s1)
{

    printf("%s \n",strcat(s,s1));
}


int main()
{
    char a[1000],a1[1000];
    printf("Enter First String : ");
    gets(a);
    printf("Enter Second String : ");
    gets(a1);
    //findCopyOfString(a,a1);
    //findCompareTwoString(a,a1);
    findConatenetOneStringToAnother(a,a1);
    findCopyOfString(a,a1);
    findCompareTwoString(a,a1);


}
