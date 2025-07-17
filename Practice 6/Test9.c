// POINTER TO POINTER

#include <stdio.h>
int main(){
    int i=85;
    int* j=&i;
    int**k = &j;
    printf("The value of i is : %d\n",*j);
    printf("The value of i is : %d\n",**k);
    printf("The address of i is : %p\n",&i);
    return 0;
}