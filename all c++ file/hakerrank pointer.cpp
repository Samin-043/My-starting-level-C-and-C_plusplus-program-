#include<iostream>
using namespace std;
void number(int *a,int *b);
int main()
{
    int x,y;
    while(cin>>x>>y)

    number(&x,&y);


    return 0;
}
void number(int *a,int *b)
{
    int sum=*a+*b;
    cout<<sum<<"\n";
    if(*a>*b)
        cout<<*a-*b<<"\n";
    else
        cout<<*b-*a<<"\n";


}
