#include<studio.h>
Void main()
{
 int no,s=0,c=0,temp,r=0;
 printf("enter the no");
 scanf("%d",&no);
 while(no!=0)
 {
 r=no % 10;
 c=pow(r,3);
 s=s+c;
 no=no/10;
 }
 if(s= temp)
printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}
