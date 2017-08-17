
#include <stdio.h>
int main()
{
    char str[100];
    int countDigits,countAlphabet,countSpecialChar;
    int counter;
    countDigits=countAlphabet=countSpecialChar=0;
     printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpecialChar++;
    }
    printf("\nDigits: %d \nAlphabets: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpecialChar);
    return 0;
}
