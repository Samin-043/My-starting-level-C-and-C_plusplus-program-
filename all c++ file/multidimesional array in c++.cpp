#include<iostream>
using namespace std;
int main()
{
    int n1,n2,j,sum=0;

    cin>>n1>>n2;
    int a[n1][n2];

    for(int i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {

            cout<<"\t";

            cout<<a[i][j]<<" ";

        }

        cout<<"\n";
    }
    if(n1==n2)
    {
        for(int i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                if((i==1&&j==0)||(i==2&&j==0)||(i==2&&j==1)||(i==3&&j==0)||(i==3&&j==1)||(i==3&&j==2)||(i==4&&j==0)||(i==4&&j==1)||(i==4&&j==2)||(i==4&&j==3))
                    continue;
                sum+=a[i][j];
                //cout<<sum;
            }

        }
        cout<<sum;

        cout<<"\n";
    }

    return 0;
}
