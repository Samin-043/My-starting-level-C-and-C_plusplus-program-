#include<stdio.h>
#include<string.h>
struct Student
{
    //char name[20];
    int  age;
    int id;

};

/*int main()
{
    struct Student s[10];
    s[0].id=20;
    s[0].age=18;
    printf("%d %d\n",s[0].id,s[0].age);

    return 0;
}*/
int main()
{
    struct Student S={10,20};
    struct Student *S1=&S;
    printf("%d %d\n",S1->id,S1->age);



}
