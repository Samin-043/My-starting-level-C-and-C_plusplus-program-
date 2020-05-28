#include<iostream>
#include<string>
//#include<sstream>

using namespace std;
int main()
{

    string mystring;
    int integer_value;
    float float_value;

    cout << "Enter First number : ";
    getline(cin,mystring);
    stringstream(mystring)>>integer_value;
    cout << "Enter Second number : ";
    getline(cin,mystring);
    stringstream(mystring)>>float_value;
    cout << "Sum : "<<integer_value*float_value<<"\n";

}
