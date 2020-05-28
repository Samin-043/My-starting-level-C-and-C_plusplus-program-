#include<stdio.h>
struct employee{
 char name[100];
 int age;
 double weight;

}office[3];

int main()
{
    for(int i=0;i<3;i++)
    {
       printf("Name : ");
       gets(office[i].name);
       printf("\nAge : ");
       scanf("%d",&office[i].age);
       printf("\nWeight : ");
       scanf("%lf",&office[i].weight);

    }
    for(int i=0;i<3;i++)
    {
        printf("\nEmployee Description : \n");
        printf("%s\n",office[i].name);
       printf("\nage : %d\n",office[i].age);
        printf("weight : %.2lf\n",office[i].weight);

    }
    return 0;
}
