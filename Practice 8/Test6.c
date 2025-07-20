#include <stdio.h>

void own_counter(char a[]);
void own_counter(char a[]){
int counter=0;
    for (int i = 0; a[i] !='\0'; i++)
    {
         counter++ ;  
    }
    printf("The length of the array is  : %d\n",counter);
}

int main(){
    char hello[50];
    printf("Enter the data of array : ");
    scanf("%s",hello);
    own_counter(hello);
    return 0;
}