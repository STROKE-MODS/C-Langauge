// trying to create a swap func

#include <stdio.h>

void swap(int* ,int*);
void swap(int* a ,int* b){
    int temp;
    temp = *b;
    *a=temp;
    *b= *a;  
}

int main(){
    int a=6,b=4;
    printf("The values of the a and b are : %d and %d respectively.\n",a,b);
    swap(&a,&b);
    printf("The values of a and b are : %d and %d respectively.\n",a,b);
    return 0;
}