#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num=24;
    //cout << setfill('x')<< setw(10)<<" Samin Ul Alam"<<endl;
    cout << setw(num) << "Setting row and column" <<endl;
     int column,row;
     int maxcolumn = 4;
     int width = 6;
     for(row=1;row<=10;row++)
     {
         for(column=1;column<=maxcolumn;column++)
         {
             cout << setw(width) << row*column;
         }

         cout << endl;

     }
    cout << setw(10)<<"Samin Ul Alam"<<endl;

}

