#include<stdio.h>
int disk_num;
int hanoi(int disks);
void disk_numbers();
int main()
{
    disk_numbers();
    printf("Total move numbers : %d\n",hanoi(disk_num));
    return 0;
}

void disk_numbers()
{
    printf("Enter numbers of towers of hanoi : ");
    scanf("%d",&disk_num);

}

int hanoi(int disks)
{
    if (disks==1)
        return 1;
    else
        return(2*hanoi(disks-1)+1);

}
