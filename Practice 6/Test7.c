#include <stdio.h>

void number_into_fx(int*);
void number_into_fx(int* a){
    *a*=10 ;
   
}

int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    number_into_fx(&number);
    printf("The new number is: %d ",number);
    
    return 0;
}