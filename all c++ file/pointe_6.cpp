#include<stdio.h>

//void passbyValue(int a);

void passbyValue(int a)
{

    printf("pass by value got %d\n",a);        /// value is : 10///
    a=2000;
    printf("Pass by value now has %d\n",a);      /// value is : 2000///

}
void passbyPointer(int *a)
{

    printf("pass by pointer got %d\n",*a);
    *a=2000;
    printf("Pass by value now has %d\n",*a);

}

void passbyRefference(int &a)
{

    printf("pass by reference got %d\n",a);
    a=2000;
    printf("Pass by value now has %d\n",a);

}

int main()
{

    int a=10;
    printf("Sending a= %d and pass by value\n",a);
    passbyValue(a);
    printf("After pass by value, a is %d\n",a);

    a=10;
    printf("Sending a= %d and pass by pointer\n",a);
    passbyPointer(&a);
    printf("After pass by pointer, a is %d\n",a);

    a=10;
    printf("Sending a= %d and pass by pointer\n",a);
    passbyRefference(a);
    printf("After pass by pointer a is %d\n",a);

    return 0;
}
