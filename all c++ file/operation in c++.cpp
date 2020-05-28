#include<iostream>
using namespace std;
/*int main()
{
    int num1,num2;
    cin >> num1 >>num2;
    int c=(num1==num2) ? num1 : num2;
     int d=(num1,num1+2);
    cout << c << " "<<d <<"\n";


    return 0;
}*/

///type casting operator///

int main()
{
    int num1=10;
    float num2=56.4785;
    int i=(int) num2;
    cout << i <<endl;
    i=int (num2);
    cout << i << endl;
    cout << sizeof(i) << endl;     ///size of operator///
    return 0;

}

