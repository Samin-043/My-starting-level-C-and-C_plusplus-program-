#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ch;
    string first_text;
    string second_text;
    while(cin>>first_text>>second_text)
    {
        cout<<first_text.size()<<" "<<second_text.size()<<"\n"<<first_text+second_text<<"\n";
        //cout<<first_text+second_text<<"\n";
        ch=first_text[0];
        first_text[0]=second_text[0];
        second_text[0]=ch;

        cout<<first_text<<" "<<second_text<<"\n";
    }

}
