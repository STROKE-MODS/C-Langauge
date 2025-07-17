#include <stdio.h>


int main(){
    int a = 72;
    int* j= &a;
    int** k=&j;
    printf("The address of the integer a is : %p\n",j) ;    
    printf("The address of the integer a is : %p\n",&a) ;    
    printf("The address of the integer a is : %u\n",a) ;    
    printf("The address of the integer a is : %u\n",*j) ;    
    printf("The address of the integer j is : %u\n",**k) ;    
    return 0;
}