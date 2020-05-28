#include<iostream>
using namespace std;
int main()
{
    int n=1;
    number:cout << n << " ";
    n++;
    if(n<11)
        goto number;
    cout << "\n";

    return 0;
}
