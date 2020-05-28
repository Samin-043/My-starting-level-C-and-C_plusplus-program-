#include<iostream>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int index;
    char str1[100]="Welcome 2019 Cricket World Cup";
    char str2[100]="In England";
    char str3[100];
    char *ptr;
    int ch='c';
    //cout<<strncpy(str1,str2,strlen(str1))<<"\n";
    //cout<<strlen(str1)<<"\n";
    //cout<<sizeof(str1)<<"\n";
   // cout<<strcat(str1,str2)<<"\n";
    //cout<<strcpy(str3,str1)<<"\n";
    //if(strcmp(str1,str2)==0)
      //  cout<<"Equal"<<"\n";
    //else if(strcmp(str1,"abcdefghijklmnopqrstuvwxyzasifkamalrakib")>0)
       // cout<<"Letter"<<"\n";
    //else if(strcmp(str1,"abcdefghijklmnopqrstuvwxyzasifkamalrakib")<0)
       // cout<<"str1"<<"\n";

       //if(strncmp(str1,str2,7)<0)
       //{
         //  cout<<"str2"<"\n";
       //}
         //  else if(strncmp(str1,str2,7)>0)
           // cout<<"str1"<<"\n";
           //else
            //cout<<"equal"<<"\n";

        strncat(str1,str2,10);
        cout<<str1<<"\n";


    return 0;
}
