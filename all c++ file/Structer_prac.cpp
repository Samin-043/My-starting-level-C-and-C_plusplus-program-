
#include<stdio.h>
#include<string.h>

struct Computer
{
	char brand[10];
	int memory_speed;
	int graphics_card;

	Computer()
	{

	}

	Computer (char *brand,int graphics_card,int memory_speed)
	{
	    strcpy(this->brand,brand);
	    //this->memory_speed=memory_speed;
	    this->graphics_card=graphics_card;
	    this->memory_speed=memory_speed;

	}
	void print_Info()
	{
	    printf("%s %d %d\n",brand,graphics_card,memory_speed);

	}


};

typedef struct Computer PC;

/*void pc_Info(PC A)
	{
	    printf("%s %d %d\n",A.brand,A.graphics_card,A.memory_speed);
	}
*/


int main()
{
    Computer PC[5];

    for(int i=0;i<5;i++)
    {
        scanf("%s",PC[i].brand);
        scanf("%d",&PC[i].memory_speed);
        scanf("%d",&PC[i].graphics_card);
        PC[i].print_Info();
    }
    //pc_Info(A);
    //PC[5].print_Info();
    //print_Info();

    //printf("%s %d %d",A.brand,A.graphics_card,A.memory_speed);

    return 0;
}








/*
//typedef struct Computer PC;

int main()
{
    //struct Computer pc[5];
   /* for(int i=0;i<5;i++)
    {
        scanf("%s",pc[i].brand);
        scanf("%d",&pc[i].memory_speed);
        scanf("%d",&pc[i].graphics_card);
    }

    //printf("/nStudent Database : \n");
    for(int i=0;i<5;i++)
    {

       // printf("Brand : %s\n",pc[i].brand);
        //printf("Memory_Speed : %d\n",pc[i].memory_speed);
        //printf("Graphics_card : %d\n",pc[i].graphics_card);
    }


    //printf("Computer brand is : %s\nComputer memory_speed %d\nComputer graphics card is %d\n",PC.brand,PC.memory_speed,PC.graphics_card);


*/


