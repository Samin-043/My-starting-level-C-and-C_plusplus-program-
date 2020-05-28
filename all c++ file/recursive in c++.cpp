#include<iostream>
using namespace std;
long long factoral(long long z);
int main()
{
    long long number;
    for(int i=0; i<20; i++)
    {

        cin >> number ;
        cout << number << " Factorial(!):" << factoral(number)<< "\n"<<endl;

    }

    return 0;
}

long long factoral(long long z)
{
    if(z<1)
        return 1;
    else
        return(z*factoral(z-1));

}
