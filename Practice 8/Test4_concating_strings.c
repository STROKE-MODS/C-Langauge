#include <stdio.h>
#include <string.h>
int main(){
    char array1[50];
    printf("Enter the data of the array 1: ");
    fgets(array1,50,stdin);
    char array2[50];
    printf("Enter the data of the array 2 :");
    fgets(array2,50,stdin);
    int result = strcmp("Hello","world");
    printf("%d",result);
    strcat(array1,array2);
    printf("The value of the array 2 is : %s",array1);
    return 0;
}