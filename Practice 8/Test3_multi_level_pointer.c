#include <stdio.h>
#include <string.h>

char string_Change(char *array);
char string_Change(char *array){
    printf("Enter the new string : ");
    fgets(array,100,stdin);
    

    
}

int main(){
    char array1[100]="Hello";
    string_Change(array1);
    printf("The new string is : %s",array1);



    return 0;
}