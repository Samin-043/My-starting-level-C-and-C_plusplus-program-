#include<stdio.h>
#include<string.h>

struct Book
{
    char book[20];
    char author[20];
    int quantity;
    int price;


    Book()
    {


    }



};
void difference_price(struct Book *M,int n)
    {
        int result,highest,lowest;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                highest=M[i].price;
                lowest=M[i].price;

            }
            else if(M[i].price>highest)
            {
                highest=M[i].price;

            }
            else if(M[i].price<lowest)
            {
                lowest=M[i].price;
            }

        }
        printf("Maximum : %d\n",highest);
        printf("Lowest : %d\n",lowest);
        printf("%d\n",highest-lowest);

    }


int main()
{
    Book B[100];
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d %d",B[i].book,B[i].author,&B[i].quantity,&B[i].price);

    }

    difference_price(B,n);

    return 0;
}
