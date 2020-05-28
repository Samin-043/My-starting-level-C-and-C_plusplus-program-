#include<stdio.h>

struct student
{
    char name[30];
    int age;
    float marks[3];
} std[10];

int main(void)
{
    int i;
    float sum=0;
    for(i=0;i<10;i++)
    {
    printf("Enter name: ");
    gets(std[i].name);
    printf("Enter age: ");
    scanf("%d",&std[i].age);
    printf("Enter 3 marks: ");
    for(i=0; i<3; i++)
    {
        scanf("%f",&std[i].marks[i]);
        sum+=std[i].marks[i];
    }
    }
    for(i=0;i<10;i++)
    {
    printf("\n\n::: Output :::");
    printf("\n\nName: ");
    puts(std[i].name);
    printf("Total Marks: %.1f\n", sum);
    }
    return 0;
}
