#include<iostream>
using namespace std;
void number(int a,int b,int c,int d);

int main()
{
    int w,x,y,z;
    number(w,x,y,z);

}

void number(int a,int b,int c,int d)
{

   while(cin>>a>>b>>c>>d)
   {
    if(a>b&&a>c&&a>d)
        cout << a<<"\n";
    else if(b>a&&b>c&&b>d)
        cout<<b<<"\n";
    else if(c>a&&c>b&&c>d)
        cout<<c<<"\n";
    else
        cout<<d<<"\n";
   }

}
