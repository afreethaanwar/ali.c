#include <stdio.h>
void main()
{
int number,m=10,n=20;
printf("print the even nos in the given range");
for(number=m;number<=n;number++)
{
if(number%2==0)
printf("%d",number);
}
getch();
}
