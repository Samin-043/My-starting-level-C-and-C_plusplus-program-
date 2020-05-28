#include<iostream>
using namespace std;
int main()
{
    char name1,name2;
    //cout << "Enter a line" << endl;
    //cin.getline(name,100);                               ///getline input stream///
    //cout << cin.gcount() << "\n" << "The line is " << name <<"\n";            ///gcount input stream///
        name1=cin.get();        ///get one character///
        cin.ignore(300,' ');
        name2=cin.get();

        cout << "After modification : " << name1<< name2 << "\n";

    return 0;
}
