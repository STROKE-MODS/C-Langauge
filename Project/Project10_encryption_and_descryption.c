#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypting(char text[]);
void decrypting(char text[]);
void encrypting(char text[])
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '\n')
        {
            text[i] = '\0';
        }

        text[i] = text[i] + 2;
    }
    text[strlen(text)] = '\0';
}
void decrypting(char text[])
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '\n')
        {
            text[i] = '\0';
        }

        text[i] = text[i] - 2;
    }
    text[strlen(text)] = '\0';
}
int main()
{
    int i;
    while (1)
    {

        printf("\t\t*------------Welcome_To_Encrypting_&_Descrypting_World-------------*\n");
        char a[100];
        int number;
        printf("Tell what you want to do : \n");
        printf("1..Encryption\n");
        printf("2..Decryption\n");
        printf("3..Exit\n");
        fgets(a, sizeof(a), stdin);
        a[strcspn(a, "\n")] = '\0';
        if (strcmp(a, "encryption") == 0)
        {
            printf("\t\t\t\t*------------ENCRYPTION-------------*\n");
            char text[100];
            printf("Enter the text you want to be Encrypted : ");
            fgets(text, sizeof(text), stdin);
            encrypting(text);
            printf("The encrypted code is : %s\n", text);
        }
        if (strcmp(a, "decryption") == 0)
        {
            printf("\t\t\t\t*------------DECRYPTION-------------*\n");
            char text[100];
            printf("Enter the text you want to be DECRYPTED : ");
            fgets(text, sizeof(text), stdin);
            decrypting(text);
            printf("The decrypted code is : %s\n", text);
        }
        if (strcmp(a, "exit") == 0)
        {
            printf("\t\t\t\t*------------THANK_YOU-------------*\n");

            break;
        }
    }
    return 0;
}