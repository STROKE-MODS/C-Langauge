#include <stdio.h>
#include <string.h>

int main(){
    char array1[50];
    printf("Enter the characters you want in the array : ");
    fgets(array1,50,stdin);
    int length_of_array1 = strlen(array1);
    printf("The length of the array a is : %d\n",length_of_array1);
    return 0;
}
