#include <stdio.h>
#include <string.h>
#include <ctype.h>

void string_splitting(char a[], char b);
void string_splitting(char a[], char b)
{
    char break_of_string[100];
    int j=0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (tolower(a[i]) == tolower(b))
        {
            continue;
        }
        break_of_string[j]=a[i];
        j++;
    }
    break_of_string[j]='\0';
    printf("The string created is  : %s",break_of_string);
}
int main()
{
    char a[100];
    char b;
    printf("Enter the statement : ");
    fgets(a, sizeof(a), stdin);
    printf("Enter the character you want to separate it with : ");
    scanf("%c", &b);
    string_splitting(a, b);
    return 0;
}