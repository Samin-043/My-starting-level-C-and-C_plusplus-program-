#include<stdio.h>
struct day{
    char name[100];
   int height;
   int weight;
}today[3];

/*int main()
{
    for(int i=0;i<3;i++)
    {
        printf("Enter name of Angle : ");
        scanf("%s",today[i].name);
        printf("Enter Height of today : ");
        scanf("%d",&today[i].height);
        printf("Enter Weight of today : ");
        scanf("%d",&today[i].weight);

    }
    for(int i=0;i<3;i++)
        {
            printf("Name of Angle : %s\n",today[i].name);
            printf("Height : %d\n",today[i].height);
            printf("Weight : %d\n",today[i].weight);


        }

    return 0;
}*/




void main()
{

    for(int i=0;i<3;i++)
    {
             printf("eEnter details of the day\n");
             scanf("%s %d %d",&today[i].name,&today[i].height,&today[i].weight);


    }

    for(int i=0;i<3;i++)
    {

        printf("Name of Angle : %s\n",today[i].name);
            printf("Height : %d\n",today[i].height);
            printf("Weight : %d\n",today[i].weight);

    }
}
