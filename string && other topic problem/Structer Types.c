#include<stdio.h>
struct date{
  int atten;
  char *name;

}today={60,"Asif"};

//struct date today={60,"Asif"};
int main(void)
{
    printf("Student Attendance : %d\n",today.atten);
    printf("One Student Name : %s\n",today.name);

    return 0;
}

