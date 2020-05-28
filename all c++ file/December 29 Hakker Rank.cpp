#include<iostream>
using namespace std;
int main()
/*
{
    cout<<"Hello, World!"<<"\n";

    return 0;
}

{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if((a>0&&a<=1000)&&(b>0&&b<=1000)&&(c>0&&c<=1000))
        {
           cout<<a+b+c<<"\n";
        }

    }
    return 0;
}*/

/*{
    int num;
    while(cin>>num)
    {
        if(num>0)
        {
            switch(num)
            {
            case 1:
                cout<< "one"<<"\n";

            case 2:
                cout<< "two"<<"\n";

            case 3:
                cout<< "three"<<"\n";

            case 4:
                cout<< "four"<<"\n";

            case 5:
                cout<< "five"<<"\n";

            case 6:
                cout<< "six"<<"\n";

            case 7:
                cout<< "seven"<<"\n";

            case 8:
                cout<< "eight"<<"\n";

            case 9:
                cout<< "nine"<<"\n";

            default:
                {
                    if(num%2==0)
                        cout<<"even"<<"\n";
                    else
                        cout<<"odd"<<"\n";
                }

            }
        }
    }

        return 0;
    }
*/
{
    int a,b,i;
    while(cin>>a>>b)
    {
        if(b>=a)
        {
            for(i=a; i<=b; i++)
            {

                switch(i)
                {
                case 1:
                    cout<< "one"<<"\n";
                    break;

                case 2:
                    cout<< "two"<<"\n";
                    break;

                case 3:
                    cout<< "three"<<"\n";
                    break;

                case 4:
                    cout<< "four"<<"\n";
                    break;

                case 5:
                    cout<< "five"<<"\n";
                    break;

                case 6:
                    cout<< "six"<<"\n";
                    break;

                case 7:
                    cout<< "seven"<<"\n";
                    break;

                case 8:
                    cout<< "eight"<<"\n";
                    break;

                case 9:
                    cout<< "nine"<<"\n";
                    break;
                default:
                {
                    if(i%2==0)
                        cout<<"even"<<"\n";
                    else
                        cout << "odd"<<"\n";
                }

                }

            }
        }
    }
    return 0;
}





