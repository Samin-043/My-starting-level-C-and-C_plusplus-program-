#include<iostream>
using namespace std;
int main()
{
    int i,j,n1,n2,a[100][100];
    int sum=0,multiple=1;
    cout<<"Row : ";
    cin>>n1;
    cout<<"Column : ";
    cin>>n2;

    for(i=0;i<n1;i++)
    {

        for(j=0;j<n2;j++)
        {
            cin>>a[i][j];

        }

    }
    for(i=0;i<n1;i++)
    {

        for(j=0;j<n2;j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<"\n";

    }
    for(i=0;i<n1;i++)
    {

        for(j=0;j<n2;j++)
        {
            sum+=a[i][j];
            multiple*=a[i][j];

        }
        //cout<<" Sum : "<<sum<<"Multiple : "<<multiple<<"\n";

    }
    cout<<"Sum : "<<sum<<" "<<"Multiple : "<<multiple<<"\n";

}



