#include<stdio.h>
 int main()
 {
 int n,revinteger=0,orginteger,rem;
 printf("enter the integer");
 scanf("%d",&n);
 orginteger=n;
 while(n!=0)
 {
 rem=n%10;
 revinteger=revinteger*10+rem;
 n /=10;
 }
 if(orginteger==revinteger)
 printf("%d is a paliandrome",orginteger);
 else
 printf("%d is not a paliandrome",orginteger);
return 0;
}
