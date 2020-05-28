//strncpy//

/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;

    char str1[15];
    char str2[15];
    scanf("%s%s",str1,str2);
    len=strlen(str1);
    //scanf("%s%s",str1,str2);
    strncpy(str1,str2,len);             //strncpy() here n number of characters will remove from string1 and then copy from the second string//

    str1[len]='\0';

    printf("%s",str1);

}*/

//strncat/

/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;

    char str1[15];
    char str2[15];
    scanf("%s%s",str1,str2);
    len=strlen(str2);
    //scanf("%s%s",str1,str2);                  //strcat() in there concatenation how many characters are second string which will be added after first string//
    strncat(str1,str2,len);

    //str1[3]='\0';

    printf("%s",str1);

}*/

//strcmp//

/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;

    char str1[15];
    char str2[15];
    scanf("%s%s",str1,str2);
    //len=strlen(str1);
    //scanf("%s%s",str1,str2);,len
    //strncmp(str1,str2,len);
     if(strncmp(str1,str2,2)==0)      //strncmp() there compare uses how many words or character are compare in string//
        printf("They are same\n");
     else
        printf("They are not same\n");

    //str1[len]='\0';

   // printf("%s",str1);

}*/

//strchr()

/*#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="We are Bangladeshi";

    int address,base;

    base=(int)str;                                 //type cast//

    printf("%d",address=(int)strchr(str,'n'));     //type cast //


    //printf("%d\t%d",base,address);
   //printf("%d\n",address-base);

   if(address==0)
   {

       printf("Not Found\n");

   }
   else
    printf("Found at position %d",address-base);


    return 0;

}*/


//strrchr//
/*#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="We are Bangladeshi";

    int address,base,address1;

    base=(int)str;

    address1=(int)strrchr(str,'e');              //type cast//

    printf("%d",address1-base+1);
 return 0;
}
*/


//strstr()

/*#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="We are Bangladeshi";

    int address,base;

    base=(int)str;                                 //type cast//

    address=(int)strstr(str,"are");                //type cast //

    //printf("%d\t%d",base,address);
   //printf("%d\n",address-base);

   if(strstr(str,"are")==NULL)
   {

       printf("Not Found\n");

   }
   else
    printf("Found at position %d\n",address-base+1);


    return 0;

}*/

//strspn()

/*#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str1[100]="Amar nam Rohit";
    char str2[100]="abcdefghijklmnopqrstuvwxyz";
    printf("%d\n",strspn(str1,str2));
    //gets(str1);
    //gets(str2);




    return 0;
}*/


//strcspn()//



/*#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str1[100]="Aust_cse";
    char str2[100]="abc";
    printf("%d\n",strcspn(str1,str2));
    //gets(str1);
    //gets(str2);




    return 0;
}

*/

//Palindrome//

#include<stdio.h>
#include<string.h>


int main()
{

        int len,i,j;
    char str[1000],rev[1000];

    while(scanf("%s",str)!=EOF)
    {
          len=strlen(str);
          j=0;
          for(i=len-1;i>=0;i--)
          {

              rev[j]=str[i];
              j++;

          }
           rev[j]='\0';
           printf("%s\n",rev);


          if(strcmp(str,rev)==0)
          {

              printf("Palindrome\n");

          }
          else
            printf("Not Palindrome\n");



        //printf("%s\n",strrev(str);

        //check=strcmp((strrev(str)),str);
        //printf("%d",check);

    }

}
