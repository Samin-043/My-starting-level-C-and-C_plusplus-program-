#include<stdio.h>

int main()
{
        int a=3,b=2,c=1;

		//Checking for a is middle number or not
		if( b>a && a>c || c>a && a>b )
		{
			printf("a is middle number");
		}

        //Checking for b is middle number or not
		if( a>b && b>c || c>b && b>a )
		{
			printf("b is middle number");
		}

        //Checking for c is middle number or not
		if( a>c && c>b || b>c && c>a )
		{
			printf("c is middle number");
		}


		return 0;
}
