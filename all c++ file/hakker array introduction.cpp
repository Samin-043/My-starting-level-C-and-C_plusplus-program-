#include<iostream>
using namespace std;
int main()
{
    int i,n,arr[10000],j;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            j=i;
        }

        while(j)
        {
            cout<<arr[j]<<" ";
            j--;


        }
        cout<<"\n";
    }
    return 0;
}
