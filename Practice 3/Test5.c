#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character :",ch);
    scanf("%c",&ch);
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("The character is in an Alphabet.\n");
    }
    else if ('9'>=ch && ch>='0')
    {
        printf("The Character is a Number.\n");
    }
    else if (ch == '%' ||ch == '/' ||ch == '*' ||ch == '-'  )
    { 
        printf("The Character is a special Character.\n");
    }
    else
    {
        printf("The Character is something else.\n");
    }
  
    return 0;
}