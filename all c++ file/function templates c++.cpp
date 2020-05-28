#include<iostream>
using namespace std;
template <class sometype>
sometype sum(sometype a,sometype b)
{

    sometype ans;
    ans=a+b;
    return ans;

}

int main()
{
    cout<<"Sum of the two integer is : "<<sum<int>(10,25)<<"\n";
    cout<<"Sum of the two double is : "<<sum<double>(10.5,25.5)<<"\n";
    return 0;
}

