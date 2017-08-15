#include<stdio.h>
#include<conio.h>
void gcd(int,int);
void main()
{
    int a,b;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    gcd(a,b);
    getch();
  return 0;
}
void gcd(int a,int b)
{
    int m,n;
    m=a;
    n=b;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
   printf("\nH.C.F of %d and %d is: %d",a,b,m);
}
