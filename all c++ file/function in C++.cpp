#include<iostream>
using namespace std;
int add(int num1,int num2)
{
   int result;
   result=num1+num2;
   return result;

}

int main()
{
    int a=5,b=2;
    int ans=add(10,5);
    cout << "Sum : "<< ans<<"\n";
    cout << "The sum of the two number is : "<<add(10,5)<<"\n";
    cout << "New summation : "<<add(a,b)<<"\n";
    int new_ans=4+add(10,5);
    cout << "get the answer : "<<4+add(10,5)<<"\n";
    return 0;
}
