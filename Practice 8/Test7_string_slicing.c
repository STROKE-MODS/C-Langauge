#include <stdio.h>

void string_slicing(char a[],int m ,int n);
void string_slicing(char a[],int m ,int n){
    char new_word[50];
    int j=0;
    for (int i = m; i <= n; i++)
    {
        new_word[j]=a[i];
        j++;
    }
    new_word[j]='\0';
    printf("The new word is : %s",new_word);
    
}
int main(){
    int start_from , end;
    char array1[50];
    printf("Enter the word : ");
    scanf("%s",array1);
    printf("Enter the starting point of the word you want to be cutted : ");
    scanf("%d",&start_from);
    printf("Enter the ending point of the word you want to be cutted : ");
    scanf("%d",&end);
    string_slicing(array1,start_from,end);
    return 0;
}