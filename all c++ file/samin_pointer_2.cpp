#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};

    printf("The address of array[0] is %d\n",&arr[0]);
    printf("The value stored in arr[0] is %d\n",arr[0]);
     printf("The address of array[1] is %d\n",&arr[1]);
    printf("The value stored in arr[1] is %d\n",arr[1]);
     //printf("The address of array[2] is %d\n",&arr[2]);
    //printf("The value stored in arr[2] is %d\n",arr[2]);
    // printf("The address of array[0] is %d\n",&arr[0]);

    printf("The Value of array is %d\n",arr);
    printf("The value of Second array is %d\n",arr+1);
    printf("The value stored in arr is %d\n",*arr);
     // printf("The value stored in *arr+1 is %d\n",*arr+1);
     printf("The value stored in *(arr+1) is %d\n",*(arr+1));
    //printf("The value stored in *(arr+2) is %d\n",*(arr+2));
    //printf("The value stored in *(arr+3) is %d\n",*(arr+3));
    //printf("The value stored in *(arr+4) is %d\n",*(arr+4));
    printf("The value stored in arr+1 is %d\n",arr[+2]);


    return 0;
}
