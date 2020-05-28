#include<iostream>
using namespace std;

namespace num1
{
    int a=1;
    int b=2;
}

namespace num2
{

    double a=3.14159;
    double b=6.02345;

}


int main()
{

   {
       using namespace num1;

        cout << a << "\n";
        cout << b << "\n";
        cout << num2::a << "\n";
        cout << num2::b << "\n";
        cout << num2::a+num2::b << "\n";


    }

    {
        using namespace num2;
        cout << a << "\n";
        cout << b << "\n";

    }

    return 0;

}
