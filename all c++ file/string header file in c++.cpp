
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ch;
    string first_text;
    string second_text;
    //cin>>first_text;
    //cin>>second_text;
    getline(cin,first_text);
    getline(cin,second_text);

    cout<<first_text<<" "<<second_text<<"\n";
    cout<<first_text.size()<<" " <<second_text.size()<<"\n";


       // cout<<first_text.size()<<" "<<second_text.size()<<"\n"<<first_text+second_text<<"\n";         ///strlen
        //cout<<first_text+second_text<<"\n";         ///strcat
        //ch=first_text[0];
        //first_text[0]=second_text[0];
        //second_text[0]=ch;

        //cout<<first_text<<" "<<second_text<<"\n";





}
