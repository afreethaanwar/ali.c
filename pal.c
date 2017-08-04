#include<stdio.h>
int main()
{
int n,rev integer=0,orig integer,rem;
printf("enter the integer");
scanf("%d",&n);
orig integer=n;
while(n!=0)
{
rem=n%10;
rev integer=rev integer*10+rem;
n /=10;
}
if(orig integer==rev integer)
printf("%d is a paliandrome",Org integer);
else
printf(%d is not a paliandrome",org integer);
return 0;
}


