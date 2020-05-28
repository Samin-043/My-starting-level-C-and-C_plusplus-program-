#include<iostream>
using namespace std;

void myarray(int arr[],int size_array)
{
    for(int i=0;i<size_array;i++)
    {
        if(arr[i]==4)
            continue;
        cout << arr[i] << " ";

    }

    cout << "\n";

}
int main()
{
   int arr[]={1,2,3,4,5};
    myarray(arr,5);
    return 0;

}
