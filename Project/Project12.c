#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{    
    char username[80];
    char password[80];
    int n;
    char *ptr;
    printf("Hello !!\n");
    printf("Welcome to the Password encrypter manager : \n");
    printf("Your username please : ");
    scanf("%s", username);
    getchar();
    printf("Your password please : ");
    scanf("%s", password);
    getchar();
    if(strcmp(username,"Himanshu")==0 && strcmp(password,"himanshu")==0)
    {

        printf("Enter the password length you want to create : ");
        scanf("%d", &n);
    getchar();
    ptr = (char *)malloc(n * sizeof(char));
    printf("Enter the password : ");
    fgets(ptr, n+1, stdin);
    ptr[strcspn(ptr, "\n")] = '\0';
    int len = strlen(ptr);
    for (int i = 0; i < len / 2; i++)
    {
        ptr[i] = ptr[i] + 1;
    }
    for (int i = len / 2; i < len; i++)
    {
        ptr[i] = ptr[i] + 2;
    }
    printf("Your encrypted pass is : %s\n", ptr);
    }
    else{
        printf("Wrong username or password.\n");
        return 1;
    }

    return 0;
}