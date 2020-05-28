#include<iostream>
#include<string>
using namespace std;

int main()
{
    string mystring;
    cout << "Where are you going? ";
    getline(cin,mystring);
    cout << "Oh! I like " << mystring<<endl;
    getline (cin,mystring);
    cout << "I love "<<mystring<<" place.";


}
