#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char hello[100];
    printf("Enter the statement : ");
    fgets(hello, 100, stdin);
    char h;
    int j = 0;
    printf("Enter the alphabet you want to count in the statement : ");
    scanf("%c", &h);
    for (int i = 0; i < strlen(hello); i++)
    {
        if (tolower(h) == tolower(hello[i]))
        {
            j++;
        }
    }
    printf("The number of alphabet %c in the statement : %d\n", h, j);
    return 0;
}