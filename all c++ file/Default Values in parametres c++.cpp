#include<iostream>
using namespace std;
/*int multiplie(int a,int b=5);
int main()
{
    int c,d;
    cout << multiplie(2)<<"\n";
    cout << multiplie(4,6)<<"\n";
    cout << "Enter the value : ";
    cin >>c >> d;
    cout << multiplie(c,d)<<"\n";

    return 0;
}

int multiplie(int a,int b)
{

    int r;
    r=a*b;
    return(r);

}*/
void even(int x)
{

    if(x%2==0)
        cout<<"Even"<<"\n";
    else
        cout<< "Odd" << "\n";

}
void odd(int x)
{

    if(x%2!=0)
        cout<<"Odd"<<"\n";
    else
        cout<< "Even" << "\n";

}
int main()
{
    for(int i=0;i!='Eof';i++)
    {
        cin>>i;
        odd(i);
        if(i==20)
            break;

    }

  return 0;
}


