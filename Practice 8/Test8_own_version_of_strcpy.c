#include <stdio.h>

void copy_string(char a1[],char a2[]);
void copy_string(char a1[],char a2[]){
int j=0;
    for (int i = 0; a1[i] != '\0'; i++)
    {
        a2[i] = a1[i];
        j++;
    }
    a2[j]='\0';
}

int main(){
    char array1[50];
    char array1_Copy[50];
    printf("Enter the word : ");
    fgets(array1,50,stdin);
    copy_string(array1,array1_Copy);
    printf("%s",array1_Copy);
    return 0;
}