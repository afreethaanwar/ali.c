#include <stdio.h>
int main()
{
    int n, revNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
     while(n != 0)
    {
        remainder = n%10;
        revNumber = revNumber*10 + remainder;
        n /= 10;
    }
    printf("Rev Number = %d", revNumber);
    return 0;
}
